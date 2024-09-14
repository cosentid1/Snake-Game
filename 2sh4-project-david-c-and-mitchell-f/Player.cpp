#include "Player.h"
#include "MacUILib.h"

Player::Player(GameMechs* thisGMRef)
{
    mainGameMechsRef = thisGMRef;
    myDir = STOP;

	// Insert 4 body elements, then 1 unique head element
	
   // more actions to be included
    objPos temp;
    temp.setObjPos(mainGameMechsRef->getBoardSizeX()/2, mainGameMechsRef->getBoardSizeY()/2, '*'); 
    playerPosList= new objPosArrayList();
    playerPosList->insertHead(temp);
    currtail.EQUAL=0;
}

Player::~Player()
{
    // delete any heap members here
    delete[] playerPosList; 
}

objPosArrayList* Player::getPlayerPos()
{
    return playerPosList; 
    // return the reference to the playerPos arrray list
}

void Player::updatePlayerDir()
{
    char input = mainGameMechsRef->getInput(); 
    switch(input)
    {
        case 27:
            myDir=EXIT;
            break;
        case 'w': 
            if(myDir!=DOWN)
            {
                myDir=UP;
            }
            break;
        case 'a': 
            if(myDir!=RIGHT)
            {
                myDir=LEFT;
            }
            break;     
        case 's': 
            if(myDir!=UP)
            {
                myDir=DOWN;
            }
            break; 
        case 'd': 
            if (myDir!=LEFT)
            {
                myDir=RIGHT;
            }
            break;  
            default:
                break;
    }
    // PPA3 input processing logic        
}

void Player::movePlayer()
{
    objPos currhead;
    playerPosList->getHeadElement(currhead);
    playerPosList->getTailElement(currtail); 
    switch(myDir)
        {
            case EXIT:
                mainGameMechsRef->setExitTrue(); 
            case UP:
                currhead.y--;
                currtail.y-=2;
                if(currhead.y<=0)
                {
                    currhead.y=mainGameMechsRef->getBoardSizeY()-2;  
                } 
                break;


            case LEFT:
                currhead.x-=1;
                currtail.x-=2;
                
                if(currhead.x<=0)
                {
                    currhead.x=mainGameMechsRef->getBoardSizeX()-2; 
                
                }
                break;


            case RIGHT:
                currhead.x+=1;
                currtail.x+=2;
            
                if(currhead.x==(mainGameMechsRef->getBoardSizeX()-1))
                {
                    currhead.x=1; 
                    
                }
                break;


            case DOWN:
                currhead.y+=1;
                currtail.y+=2;
                if(currhead.y==(mainGameMechsRef->getBoardSizeY()-1))
                {
                    currhead.y=1; 
                    
                }
                break;

            case STOP:
                break;

            default:
                MacUILib_printf("unknown node"); 
                break;
        }
        playerPosList->insertHead(currhead);
        if(ref!=true)
        {
            playerPosList->removeTail(); 
            ref=false;
        }
        ref=false;
    }

void Player::collision(objPos temphead, objPos tempbody)
{
    currentdir();
    if(temphead.x == tempbody.x && temphead.y == tempbody.y && currentdir() == false){
        mainGameMechsRef->setExitTrue();
    }
}

void Player::refTrue(){
    ref = true;
}
bool Player::currentdir()
{ 
    if(playerPosList->getSize() == 1)
    {
        return true;
    }
    return false; 
}


#include "objPos.h"

objPos::objPos()
{
    x = 0;
    y = 0;
    symbol = 0; //NULL
    EQUAL=0;
}

objPos::objPos(objPos &o)
{
    x = o.x;
    y = o.y;
    symbol = o.symbol;
    EQUAL=0;
}


objPos::objPos(int xPos, int yPos, char sym)
{
    x = xPos;
    y = yPos;
    symbol = sym;
    EQUAL=0;
}

void objPos::setObjPos(objPos o)
{
    x = o.x;
    y = o.y;
    symbol = o.symbol;
}

void objPos::setObjPos(int xPos, int yPos, char sym)
{
    x = xPos;
    y = yPos;
    symbol = sym;
}

void objPos::getObjPos(objPos &returnPos)
{
    returnPos.setObjPos(x, y, symbol);
}

char objPos::getSymbol()
{
    return symbol;
}

bool objPos::isPosEqual(const objPos* refPos)
{
    return (refPos->x == x && refPos->y == y);
}

char objPos::getSymbolIfPosEqual(const objPos* refPos)
{
    if(isPosEqual(refPos))
        return getSymbol();
    else
        return 0;
}

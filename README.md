# Snake-Game

This project is a recreation of the classic snake arcade game. The player controls a snake that grows longer as it consumes food. The game ends if the snake collides itself. The game's code was written in C++.

## Design Overview
This project attemtped to use the principles of a finite state machine and object orioneted programming to make the code as efficient as possible. There are many different files found within this project to help with code organization:

1) GameMechs: Defines the board size that the snake can play on and randomly generates the positions for food to be placed on.
2) objPos and objPosArrayList: objPos is a class that allows a symbol to have x and y coordinates that can be modified and interfaced with. The objPosArrayList is simply an array list of these objPos classes used to create a playable snake.
3) Player: Tracks the user's input and changes the snake's direction accordingly. Also checks for collision.
4) Project: Draws the game board and acts as the finite state machine and controls the flow of the game.

### Key Algorithms
1) Movement Algorithm: Based on input given by the user, the coordinate of the snake head's next position will be changed accordingly. Each body segment will then follow that direction until another input is recieved.
2) Collision Detection: Determines if the snake head's next position will intersect with any part of its body. If this is truen, the end game screen will appear and the user must restart to play again.
3) Food Generation: Uses a random number generator to places food at random coordinates within the game board's boundaries. It also checks to make sure that the food will not overlap with the snake's body.

## Next Steps
To improve this project, much of the draw screen code could be made into smaller functions to simplify the flow. There are too many if statements that could become check functions. This would make it easier to debug and allow for more complicated characters to appear on the screen. If this draw screen is improved, another player could be added to the game. This snake could be controlled with the arrow keys and both players could be competing to eat the same fruit. A end objective could be first to eat 15 fruits, or first to eat 1000 points worth of fruit, with different valued symbols being generated on the board.

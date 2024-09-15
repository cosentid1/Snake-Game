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
To further advance this project, it's versatility should be expnaded. Currently, the sensor only works for readings of 1/2 a cup. A simple change would be to calibrate sensor to also detect 1/4 cup, 3/4 cup and other useful measurments that are found in recipies. If all of these readings are added, it could become hard for people with vision impairments to know exactly what measurment they are currently at when their only indicator is a buzzer. To make it more clear what measurment has been reached, the buzzer can be replaced with a speaker that announces the current amount of liquid in the cup. As well, more LED's can be added and programmed to light up for different measurments.

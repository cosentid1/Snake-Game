# Snake-Game

This project is a recreation of the classic snake arcade game. The player controls a snake that grows longer as it consumes food. The game ends if the snake collides itself. The game's code was written in C++.

## Design Overview
This project attemtped to use the principles of a finite state machine and object orioneted programming to make the code as efficient as possible. There are many different files found within this project to help with code organization:

1) GameMechs: Defines the board size that the snake can play on and randomly generates the positions for food to be placed on.
2) objPos and objPosArrayList: objPos is a class that allows a symbol to have x and y coordinates that cane boe modified and interfaced with. The objPosArrayList is simply an array list of these objPos classes used to create a playable snake.
3) Player: Tracks the user's input and changes the snake's direction accordingly. Also checks for collision.
4) Project: Draws the game board and acts as the finite state machine and controls the flow of the game.

###Key Algorithms
Movement Algorithm: Updates the snake’s position based on its current direction, adjusts the position of the body segments, and handles growth when food is consumed.

Collision Detection: Determines if the snake’s head intersects with any part of its body or the game board’s boundaries, signaling the end of the game.

Food Generation: Places food at random positions on the game board, ensuring it does not overlap with the snake’s current position.

## Next Steps
To further advance this project, it's versatility should be expnaded. Currently, the sensor only works for readings of 1/2 a cup. A simple change would be to calibrate sensor to also detect 1/4 cup, 3/4 cup and other useful measurments that are found in recipies. If all of these readings are added, it could become hard for people with vision impairments to know exactly what measurment they are currently at when their only indicator is a buzzer. To make it more clear what measurment has been reached, the buzzer can be replaced with a speaker that announces the current amount of liquid in the cup. As well, more LED's can be added and programmed to light up for different measurments.

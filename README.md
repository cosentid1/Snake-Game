# Snake-Game

The aim of this device is to help people with hearing or vision impairments know when they have poured the equivalent of half a cup of liquid.

## Design Overview
1. Introduction
The Snake game is a classic arcade game where the player controls a snake that grows longer as it consumes food. The game ends if the snake collides with the walls or itself. This report describes the implementation of a basic Snake game using C++.

2. Objectives
Develop a console-based Snake game using C++.
Implement core functionalities including snake movement, food generation, collision detection, and user input handling.
3. Tools and Environment
Programming Language: C++
Development Environment: Any C++ compatible IDE (e.g., Visual Studio, Code::Blocks)
Library: C++ Standard Library for basic I/O operations and timing
4. Game Design
The Snake game comprises several key components:

Game Board: Defines the boundaries within which the snake moves and where food appears.
Snake: The entity controlled by the player that grows in length upon eating food.
Food: Randomly placed items on the game board that the snake must consume to grow.
Collision Detection: Mechanisms to detect and handle collisions with the game board boundaries or the snake’s own body.
User Input: Handling player input to change the snake's direction.
5. Implementation Details
5.1. Data Structures
Point: Represents a coordinate on the game board.
Snake Class: Manages the snake's body segments, movement, and direction.
Game Class: Controls the overall game flow, including input handling, updating game state, rendering the game, and spawning food.
5.2. Core Classes and Functions
Point Struct: Used for representing positions on the game board.

Snake Class: Responsible for the snake's movement logic, growing mechanics, and collision detection with itself or the game boundaries.

Game Class: Manages the main game loop, user input processing, game updates, rendering the game state, and generating new food items.

5.3. Main Game Loop
The main game loop repeatedly performs the following tasks:

Process user input to update the snake's direction.
Update the game state, including the snake’s movement and checking for collisions.
Render the updated game state to the console.
Control the game speed through timing mechanisms.
6. Key Algorithms
Movement Algorithm: Updates the snake’s position based on its current direction, adjusts the position of the body segments, and handles growth when food is consumed.

Collision Detection: Determines if the snake’s head intersects with any part of its body or the game board’s boundaries, signaling the end of the game.

Food Generation: Places food at random positions on the game board, ensuring it does not overlap with the snake’s current position.

7. Challenges and Considerations
Input Lag: Address potential lag in processing user input to ensure smooth and responsive control.
Collision Detection Efficiency: Optimize detection algorithms to handle real-time collision checks efficiently.
Screen Flicker: Minimize flicker in the console output by optimizing rendering techniques or reducing the frequency of screen updates.
8. Conclusion
Creating a Snake game in C++ offers a practical way to understand fundamental game development concepts such as real-time input handling, collision detection, and basic game mechanics. By dividing the game into manageable components and focusing on core algorithms, one can efficiently develop a functional Snake game.

## Next Steps
To further advance this project, it's versatility should be expnaded. Currently, the sensor only works for readings of 1/2 a cup. A simple change would be to calibrate sensor to also detect 1/4 cup, 3/4 cup and other useful measurments that are found in recipies. If all of these readings are added, it could become hard for people with vision impairments to know exactly what measurment they are currently at when their only indicator is a buzzer. To make it more clear what measurment has been reached, the buzzer can be replaced with a speaker that announces the current amount of liquid in the cup. As well, more LED's can be added and programmed to light up for different measurments.

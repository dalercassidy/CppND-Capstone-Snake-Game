# CPPND: Capstone Snake Game With Obstacles

The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl). The game was extended with 5 obstacles. The snake dies if it hits either itself or one of the 5 obstacles. The obstacles are purple blocks. The food is a yellow block.

<img src="/snake.gif">

The game was extended with an obstacles class in obstacles.h and obstacles.cpp. The obstacles class has a public method bool ObstacleCell(int x, int y) to determine if a certain coordinate is already an obstacle. It also contains a vector of SDL_Points called items which is a vector of the obstacle blocks.

## Rubric points addressed
* The project demonstrates an understanding of C++ functions and control structures.
  * New function examples
    * bool Game::OccupiedCell(int x, int y)  [line 55-58 in game.cpp] which determines if either the snake or an obstacle occupies a cell
    * bool Game::SnakeHitObstacle() [line 100-108 in game.cpp] determines if the snake has hit an obstacle
    * void Game::PlaceObstacles() [line 60-82 in game.cpp]
  * Control structure examples
    * while loops [starting at line 64 and line 66 in game.cpp]
    * if statements [line 73-79 in game.cpp]
    * for loops [line 102-106 in game.cpp]
* The project uses Object Oriented Programming techniques.
  * Obstacles class was added. Class attributes are seen starting at line 10 to line 12 in obstacles.h. The class method bool ObstacleCell(int x, int y) declared in obstacles.h performs the task to check if a given cell is an obstacle.
* Classes use appropriate access specifiers for class members.
  * The Obstacles class explicitly defines ObstacleCell(int x, int y), items and number_of_obstacles as public in obstacles.h because they are used outside the scope of the Obstacles class itself
* Class constructors utilize member initialization lists.
  * Obstacles(int num_of_obstacles) : number_of_obstacles(num_of_obstacles) {} [line 9 in obstacles.h] shows how the public variable number_of_obstacles is initialized via a constructor member initialization list
* The project makes use of references in function declarations.
  * The method Render in the class Renderer in render.h was declared with a reference to the new obstacles object. [line 15 in render.h]

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

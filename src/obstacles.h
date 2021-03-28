#ifndef OBSTACLES_H
#define OBSTACLES_H
#include "SDL.h"
#include <vector>
#include "snake.h"

class Obstacles {
 public:
  Obstacles(int grid_width, int grid_height)
      : grid_width(grid_width),
        grid_height(grid_height) {}

  bool ObstacleCell(int x, int y);
  std::vector<SDL_Point> items;  
  int number_of_obstacles{5};

  private:   
    int grid_width;
    int grid_height;
    
    
};
#endif
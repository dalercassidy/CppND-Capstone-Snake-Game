#ifndef OBSTACLES_H
#define OBSTACLES_H
#include "SDL.h"
#include <vector>
#include "snake.h"

class Obstacles {
 public:
  Obstacles(int num_of_obstacles) : number_of_obstacles(num_of_obstacles) {}
  bool ObstacleCell(int x, int y);
  std::vector<SDL_Point> items;  
  int number_of_obstacles;      
};
#endif
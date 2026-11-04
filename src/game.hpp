#pragma once
#include "spaceship.hpp"
#include "obstacle.hpp"

class Game 
{
  public:
    Game();
    ~Game();
    void Draw();
    void Update();
    void HandleInput();
  private:
    Spaceship spaceship;
    void DeleteInactiveLasers();
    std::vector<Obstacle> obstacles;
    std::vector<Obstacle> CreateObstacles();
};
#ifndef _CASE_H_
#define _CASE_H_

#include <iostream>

#include "position.h"
#include "obstacle.h"

class Case
{

private:
      Position _pos;
      Obstacle _obst;
public:
      Case() = default;
      Case(Position pos);
      Case(Position pos, Obstacle obst);

      int getX() const;
      int getY() const;
      Position getPosition() const;
      Obstacle getObstacle() const;
      
      friend istream& operator>>(istream&, Case&);
      friend ostream& operator<<(ostream&, const Case&);
};

#endif // _CASE_

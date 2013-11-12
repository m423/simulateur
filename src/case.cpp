using namespace std;

#include "case.h"

Case::Case(Position pos)
{
      _pos = pos;
}

Case::Case(Position pos, Obstacle obst)
{
      _pos = pos;
      _obst = obst;
}

int Case::getX() const
{
      return _pos.getX();
}

int Case::getY() const
{
      return _pos.getY();
}

Position Case::getPosition() const
{
      return _pos;
}

Obstacle Case::getObstacle() const
{
      return _obst;
}

ostream& operator<<(ostream& os, const Case& c)
{
      os << '(' << c._pos << ')' << " ; " << c._obst; 
      return os;
}

istream& operator>>(istream& is, Case& c)
{
      Position pos;
      Obstacle obst;
      char sep = ':';
      is >> pos >> sep >> obst;

      c._pos = pos;
      c._obst = obst;
      return is;
}

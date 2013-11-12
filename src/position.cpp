using namespace std;

#include "position.h"

Position::Position(int x, int y)
{
      _x = x;
      _y = y;
}


void Position::setx(int x)
{
      _x = x;
}

void Position::sety(int y)
{
      _y = y;
}

int Position::getX() const
{
      return _x;
}

int Position::getY() const
{
      return _y;
}

ostream& operator <<(ostream& os, const Position& p)
{
      os << p._x << ',' << p._y; 

      return os;
}

istream& operator>>(istream& is, Position& p)
{
      int x;
      int y;
      char sep = ',';
      is >> x >> sep >> y;

      p._x = x;
      p._y = y;
      return is;
}

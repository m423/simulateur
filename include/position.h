#ifndef _POSITION_H_
#define _POSITION_H_

#include <iostream>

class Position
{
private:
      int _x;
      int _y;

public:
      Position() = default;
      Position(int x, int y);
      void setx(int x);
      void sety(int y);
      int getX() const;
      int getY() const;

      friend ostream& operator<<(ostream& os, const Position& p);
      friend istream& operator>>(istream& is, Position& p);
};

#endif // _POSITION_

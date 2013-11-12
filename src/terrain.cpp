#include <string>

#include "terrain.h"
#include "obstacle.h"

void Terrain::generate()
{
     
}

void Terrain::setRobot(Robot r)
{
      _robot = r;
}
/*
Case Terrain::get(int x, int y) const
{
      for (auto c : _cases)
      {
	    if (c.getX() == x && c.getY() == y)
		  return c;
      }
      return NULL;
}
*/

int Terrain::get(int x, int y) const
{
      int l = _cases.size();
      for (int i = 0; i < l; ++i )
      {
	    if (_cases[i].getX() == x && _cases[i].getY() == y)
		  return i;
      }
      return -1;
}

ostream& operator<<(ostream& os, const Terrain& t)
{
      int i;
      cout << "  ";
      if ( t._dim_x > 10 )
	    cout << " ";

      for (int x = 0; x < t._dim_x; ++x)
	    cout << "|__" << x << "_|";

      for (int y = 0; y < t._dim_y; ++y)
      {
	    os << endl << y << " " ;
	    if ( t._dim_x > 10 && y < 10 )
		  cout << " ";
	    for (int x = 0; x < t._dim_x; ++x)
	    {
		  if ( (i = t.get(x,y)) == -1 )
			os << "|____|" ;
		  else
			os << "|" << t._cases[i].getObstacle() << "|";
	    }
      }

      os << endl;
      return os;
}

istream& operator>>(istream& is, Terrain& terrain)
{
      int dimx;
      int dimy;
      string dx;
      string dy;
      Case c;

      is >> dx >> dimx;
      is >> dy >> dimy;

      terrain._dim_x = dimx;
      terrain._dim_y = dimy;

      while (is >> c)
	    terrain._cases.push_back(c);

      return is;
}

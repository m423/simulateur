#ifndef _TERRAIN_H_
#define _TERRAIN_H_

#include <vector>

#include "robot.h"
#include "case.h"

class Terrain
{

private:
      int _dim_x;
      int _dim_y;
      Robot _robot;
      vector<Case> _cases;
      
public:
      void generate();
      void setRobot(Robot r);
      /*Case get(int x, int y) const;*/
      int get(int x, int y) const;
      friend ostream& operator<<(ostream&, const Terrain&);
      friend istream& operator>>(istream&, Terrain&);
};

#endif // _TERRAIN_

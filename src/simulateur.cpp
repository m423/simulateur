using namespace std;

#include<fstream>
#include <iostream>

#include "terrain.h"
#include "robot.h"

int main()
{
      ifstream ifs("terrain.txt");
      Terrain terrain;

      ifs >> terrain;

      cout << terrain << endl;

   return 0;
}

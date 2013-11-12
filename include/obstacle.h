#ifndef _OBSTACLE_H_
#define _OBSTACLE_H_

#include <iostream>

#include "objet.h"

class Obstacle
{
private:
      int _hauteur;
      Objet _objet;

public:
      Obstacle() = default;
      int getHauteur() const;

      friend istream& operator>>(istream&, Obstacle&);
      friend ostream& operator<<(ostream&, const Obstacle&);
};

#endif // _OBSTACLE_

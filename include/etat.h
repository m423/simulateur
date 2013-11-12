#ifndef _ETAT_H_
#define _ETAT_H_

#include "obstacle.h"

class Etat
{
private:

public:
      void avancer(int x, int y);
      void tourner(string direction);
      void saisir(Objet o);
      void poser();
      int peser();
      void rencontrerObstacle(Obstacle o);
      int evaluerObstacle();
      void figer();
      void repartir();
};

#endif // _ETAT_

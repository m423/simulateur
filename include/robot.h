#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <string>
using namespace std;

#include "objet.h"
#include "obstacle.h"
#include "etat.h"

class Robot
{
private:
      string direction;
      Etat etat;

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
      void afficher();

      Etat getEtat() const;

};
#endif // _ROBOT_

#include "robot.h"

void Robot::avancer(int x, int y)
{
      //etat.avancer(x,y);
}
 
void Robot::tourner(string direction)
{
      //etat.tourner(direction);
}

void Robot::saisir(Objet o)
{
      //etat.saisir(o);
}

void Robot::poser()
{
      //etat.poser();
}

int Robot::peser()
{
      //etat.poser();
      return 0;
}

void Robot::rencontrerObstacle(Obstacle o)
{
      //etat.rencontrerObstacle(o);
}

int Robot::evaluerObstacle()
{
      //etat.evaluerObstacle();
      return 0;
}

void Robot::figer()
{
      //etat.figer();
}

void Robot::repartir()
{
      //etat.repartir();
}

void Robot::afficher()
{
      //A implementer
}

Etat Robot::getEtat() const
{
      return etat;
}

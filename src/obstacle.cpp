using namespace std;

#include "obstacle.h"

int Obstacle::getHauteur() const
{
      return _hauteur;
}

istream& operator>>(istream& is, Obstacle& obs)
{
      char sep = ',';
      int hauteur;
      int poids;

      is >> hauteur >> sep >> poids;

      Objet obj(poids);
      obs._hauteur = hauteur;
      obs._objet = obj;

      return is;
}

ostream& operator<<(ostream& os, const Obstacle& obst)
{
      os << "O" << obst._hauteur << obst._objet;
      return os;
}

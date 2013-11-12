using namespace std;

#include "objet.h"

Objet::Objet(int poids)
{
      _poids = poids;
}

int Objet::getPoids() const
{
      return _poids;
}

ostream& operator<<(ostream& os, const Objet& objet)
{
      os << "o" << objet._poids;
      return os;
}

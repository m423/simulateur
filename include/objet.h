#ifndef _OBJET_H_
#define _OBJET_H_

#include <iostream>

class Objet
{
private:
      int _poids;

public:
      Objet() = default;
      Objet(int poids);
      int getPoids() const;

      friend ostream& operator<<(ostream& os, const Objet& objet);
};

#endif // _OBJET_

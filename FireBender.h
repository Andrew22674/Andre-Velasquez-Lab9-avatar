#pragma once
#include "Bender.h"

class FireBender : public Bender{
public:
  FireBender();
  FireBender(int, int, int, int);
  virtual Ataque(Bender*);
  virtual AtaqueEspecial(Bender*);
};

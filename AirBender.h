#pragma once
#include "Bender.h"

class AirBender : public Bender{
public:
  AirBender();
  AirBender(int, int, int, int);
  virtual Ataque(Bender*);
  virtual AtaqueEspecial(Bender*);
};

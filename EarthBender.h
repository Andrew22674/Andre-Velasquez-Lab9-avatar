#pragma once
#include "Bender.h"

class EarthBender : public Bender{
public:
  EarthBender();
  EarthBender(int, int, int, int);
  virtual Ataque(Bender*);
  virtual AtaqueEspecial(Bender*);
};

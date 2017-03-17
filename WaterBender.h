#pragma once
#include "Bender.h"

class WaterBender : public Bender{
public:
  WaterBender();
  WaterBender(int, int, int, int);
  virtual Ataque(Bender*);
  virtual AtaqueEspecial(Bender*);
};

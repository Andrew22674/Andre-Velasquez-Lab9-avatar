#pragma once
#include "Bender.h"
#include "AirBender.h"
#include "FireBender.h"
#include "EarthBender.h"

class WaterBender : public Bender{
public:
  WaterBender();
  WaterBender(int, int, int, int);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

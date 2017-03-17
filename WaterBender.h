#pragma once
#include "Bender.h"
#include "AirBender.h"
#include "FireBender.h"
#include "EarthBender.h"

class WaterBender : public Bender{
public:
  WaterBender();
  WaterBender(double, double, double, double);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

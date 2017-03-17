#pragma once
#include "EarthBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "Bender.h"

class AirBender : public Bender{
public:
  AirBender();
  AirBender(double, double, double, double);
  virtual void Ataque(Bender*);
  virtual  void AtaqueEspecial(Bender*);
};

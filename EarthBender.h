#pragma once
#include "Bender.h"
#include "WaterBender.h"
#include "FireBender.h"
#include "AirBender.h"

class EarthBender : public Bender{
public:
  EarthBender();
  EarthBender(double, double, double, double);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
  void Espiar(Bender*);
};

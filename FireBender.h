#pragma once
#include "Bender.h"
#include "WaterBender.h"
#include "AirBender.h"
#include "EarthBender.h"

class FireBender : public Bender{
public:
  FireBender();
  FireBender(double, double, double, double);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

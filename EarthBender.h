#pragma once
#include "Bender.h"
#include "WaterBender.h"
#include "FireBender.h"
#include "AirBender.h"

class EarthBender : public Bender{
public:
  EarthBender();
  EarthBender(int, int, int, int);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

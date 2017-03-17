#pragma once
#include "EarthBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "Bender.h"

class AirBender : public Bender{
public:
  AirBender();
  AirBender(int, int, int, int);
  virtual void Ataque(Bender*);
  virtual  void AtaqueEspecial(Bender*);
};

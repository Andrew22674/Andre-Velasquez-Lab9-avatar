#pragma once
#include <stdlib.h>
#include <time.h>
#include <typeinfo>
#include <iostream>

using namespace std;

class Bender{
protected:
  double defensa;
  double ofensa;
  double fuerza;
  double suerte;
public:
  Bender();
  Bender(double, double, double, double);
  virtual void Ataque(Bender*) = 0;
  virtual void AtaqueEspecial(Bender*) = 0;
  virtual int getDefensa();
  virtual int getOfensa();
  virtual int getFuerza();
  virtual int getSuerte();
  virtual void setDefensa(int);
  virtual void setFuerza(int);
  virtual ~Bender();
};

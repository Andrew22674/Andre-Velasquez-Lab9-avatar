#pragma once

using namespace std;

class Bender{
private:
  int defensa;
  int ofensa;
  int fuerza;
  int suerte;
public:
  Bender();
  Bender(int, int, int, int);
  virtual void Ataque(Bender*);
  virtual void AtaqueEspecial(Bender*);
  virtual int getDefensa();
  virtual int getOfensa();
  virtual int getFuerza();
  virtual int getSuerte();
  virtual ~Bender();
};

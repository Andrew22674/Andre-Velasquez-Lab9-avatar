#include "Bender.h"

Bender::Bender(){

}

Bender::Bender(double defensa, double ofensa, double fuerza, double suerte){
  this -> defensa = defensa;
  this -> ofensa = ofensa;
  this -> fuerza = fuerza;
  this -> suerte = suerte;
}

/*void Bender::Ataque(Bender* bender){

}

void Bender::AtaqueEspecial(Bender* bender){

}*/

int Bender::getDefensa(){
  return defensa;
}

int Bender::getOfensa(){
  return ofensa;
}

int Bender::getFuerza(){
  return fuerza;
}

int Bender::getSuerte(){
  return suerte;
}

void Bender::setDefensa(int def){
  defensa = def;
}

Bender::~Bender(){

}

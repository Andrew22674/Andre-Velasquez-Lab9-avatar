#include "AirBender.h"

AirBender::AirBender(){

}

AirBender::AirBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void AirBender::Ataque(Bender* bender){

}

void AirBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){
    double attack = ofensa + (ofensa * 0.15);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
  if(typeid(*bender).name() == typeid(EarthBender).name()){

  }
  if(typeid(*bender).name() == typeid(WaterBender).name()){

  }
}

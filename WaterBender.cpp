#include "WaterBender.h"

WaterBender::WaterBender(){

}

WaterBender::WaterBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void WaterBender::Ataque(Bender* bender){

}

void WaterBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){

  }
  if(typeid(*bender).name() == typeid(EarthBender).name()){
    double attack = ofensa + (ofensa * 0.25);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
  if(typeid(*bender).name() == typeid(AirBender).name()){

  }
}

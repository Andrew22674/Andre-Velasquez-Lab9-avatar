#include "WaterBender.h"

WaterBender::WaterBender(){

}

WaterBender::WaterBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void WaterBender::Ataque(Bender* bender){
  bender -> setDefensa((bender -> getDefensa()) - ofensa);
}

void WaterBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(EarthBender).name()){
    double attack = ofensa + (ofensa * 0.25);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
}

void WaterBender::Heal(){
  if(fuerza >= 110){
    defensa += 75;
  }
}

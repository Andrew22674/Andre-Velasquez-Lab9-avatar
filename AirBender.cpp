#include "AirBender.h"

AirBender::AirBender(){

}

AirBender::AirBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void AirBender::Ataque(Bender* bender){
  bender -> setDefensa((bender -> getDefensa()) - ofensa);
}

void AirBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){
    double attack = ofensa + (ofensa * 0.15);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }

}

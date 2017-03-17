#include "FireBender.h"

FireBender::FireBender(){

}

FireBender::FireBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void FireBender::Ataque(Bender* bender){
  bender -> setDefensa((bender -> getDefensa()) - ofensa);
}

void FireBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(WaterBender).name()){
    double attack = ofensa + (ofensa * 0.25);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
}

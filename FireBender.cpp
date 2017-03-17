#include "FireBender.h"

FireBender::FireBender(){

}

FireBender::FireBender(int defensa, int ofensa, int fuerza, int suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void FireBender::Ataque(Bender* bender){

}

void FireBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(AirBender).name()){

  }
  if(typeid(*bender).name() == typeid(EarthBender).name()){

  }
  if(typeid(*bender).name() == typeid(WaterBender).name()){

  }
}

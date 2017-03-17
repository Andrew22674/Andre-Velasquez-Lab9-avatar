#include "AirBender.h"

AirBender::AirBender(){

}

AirBender::AirBender(int defensa, int ofensa, int fuerza, int suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void AirBender::Ataque(Bender* bender){

}

void AirBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){

  }
  if(typeid(*bender).name() == typeid(EarthBender).name()){

  }
  if(typeid(*bender).name() == typeid(WaterBender).name()){

  }
}

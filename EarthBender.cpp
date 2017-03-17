#include "EarthBender.h"

EarthBender::EarthBender(){

}

EarthBender::EarthBender(int defensa, int ofensa, int fuerza, int suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void EarthBender::Ataque(Bender* bender){

}

void EarthBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){

  }
  if(typeid(*bender).name() == typeid(AirBender).name()){

  }
  if(typeid(*bender).name() == typeid(WaterBender).name()){

  }
}

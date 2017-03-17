#include "WaterBender.h"

WaterBender::WaterBender(){

}

WaterBender::WaterBender(int defensa, int ofensa, int fuerza, int suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void WaterBender::Ataque(Bender* bender){

}

void WaterBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){

  }
  if(typeid(*bender).name() == typeid(EarthBender).name()){

  }
  if(typeid(*bender).name() == typeid(AirBender).name()){

  }
}

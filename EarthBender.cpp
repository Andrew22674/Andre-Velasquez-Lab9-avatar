#include "EarthBender.h"

EarthBender::EarthBender(){

}

EarthBender::EarthBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void EarthBender::Ataque(Bender* bender){

}

void EarthBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(FireBender).name()){

  }
  if(typeid(*bender).name() == typeid(AirBender).name()){
    double attack = ofensa + (ofensa * 0.25);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
  if(typeid(*bender).name() == typeid(WaterBender).name()){

  }
}

void EarthBender::Espiar(Bender* bender){
  cout << "Defensa de oponente: " << bender -> getDefensa() << endl;
  cout << "Ofensa de oponente: " << bender -> getOfensa() << endl;
  cout << "Fuerza de oponente: " << bender -> getFuerza() << endl;
  cout << "Suerte de oponente: " << bender -> getSuerte() << endl;
}

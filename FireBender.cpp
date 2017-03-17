#include "FireBender.h"

FireBender::FireBender(){

}

FireBender::FireBender(double defensa, double ofensa, double fuerza, double suerte) : Bender(defensa, ofensa, fuerza, suerte){

}

void FireBender::Ataque(Bender* bender){
  srand (time(NULL));
  double atk = ofensa;
  if(suerte >= 0 && suerte <= 5){
    int ran = rand() % 1000 + 1;

    if(ran == 50){
      cout << "Smash hit!" << endl;
      atk += atk * 0.5;
    }
  }else if(suerte >= 6 && suerte <= 9){
    int ran = rand() % 100 + 1;

    if(ran % 5 == 0){
      cout << "Smash hit!" << endl;
      atk += atk * 0.5;
    }
  }else{
    int ran = rand() % 10 + 1;
    if(ran % 3 == 0){
      cout << "Smash hit!" << endl;
      atk += atk * 0.5;
    }
  }


  bender -> setDefensa((bender -> getDefensa()) - atk);
}

void FireBender::AtaqueEspecial(Bender* bender){
  if(typeid(*bender).name() == typeid(WaterBender).name()){
    double attack = ofensa + (ofensa * 0.25);
    bender -> setDefensa((bender -> getDefensa()) - attack);
  }
}

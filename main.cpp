#include <iostream>
#include <vector>
#include "Bender.h"
#include "AirBender.h"
#include "EarthBender.h"
#include "WaterBender.h"
#include "FireBender.h"

using namespace std;

int main(){
  vector<Bender*> benders;

  benders.push_back(new AirBender(100, 80, 50, 10));
  benders.push_back(new EarthBender(90, 90, 111, 4));
  benders.push_back(new WaterBender(80, 100, 100, 6));
  benders.push_back(new FireBender(95, 105, 40, 3));


  cout << "P1 ingrese index de bender (0-4)" << endl;
  int index;
  cin >> index;

  cout << "P2 ingrese index de bender (0-4)" << endl;
  int index2;
  cin >> index2;

  while(index2 == index){
    cout << "Ingrese index de otro bender" << endl;
    cin >> index2;
  }

  bool seguir = true, turno = 0;
  while(seguir){
    if(turno % 2 == 0){//turno de bender 1
      cout << "Turno de bender 1" << endl;

      cout << "1. Ataque normal" << endl
      << "2. Ataque especial" << endl;

      if(typeid(*benders[index]).name() == typeid(EarthBender).name()){
        cout << "3. Espiar" << endl;
      }
      if(typeid(*benders[index]).name() == typeid(WaterBender).name()){
        cout << "3. Heal" << endl;
      }

      cout << "4. Run" << endl;

      int opcion;
      cin >> opcion;

      if(opcion == 1){

      }else if(opcion == 2){

      }else if(opcion == 3 && typeid(*benders[index]).name() == typeid(EarthBender).name()){

      }else if(opcion == 3 && typeid(*benders[index]).name() == typeid(WaterBender).name()){

      }else if(opcion == 4){

      }
    }else{//turno de nemder 2
      cout << "Turno de bender 2" << endl;

      cout << "1. Ataque normal" << endl
      << "2. Ataque especial" << endl;

      if(typeid(*benders[index]).name() == typeid(EarthBender).name()){
        cout << "3. Espiar" << endl;
      }
      if(typeid(*benders[index]).name() == typeid(WaterBender).name()){
        cout << "4. Heal" << endl;
      }

      int opcion;
      cin >> opcion;
    }



    if(benders[index] -> getDefensa() <= 0){//para detectar si alguien gano
      cout << "Gano el bender 2" << endl;
      seguir = false;
    }
    if(benders[index2] -> getDefensa() <= 0){
      cout << "Gano el bender 1" << endl;
      seguir = false;
    }
  }

  return 0;
}

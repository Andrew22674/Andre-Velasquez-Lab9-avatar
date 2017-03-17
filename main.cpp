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

  benders.push_back(new AirBender(1000, 80, 50, 10));
  benders.push_back(new EarthBender(900, 90, 55, 4));
  benders.push_back(new WaterBender(800, 100, 40, 6));
  benders.push_back(new FireBender(950, 105, 48, 3));


  int opc = 0;
  while(opc != 3){
    cout << "1. Agregar benders" << endl
    << "2. Simulacion" << endl
    << "3. Salir" << endl;
    cin >> opc;
    if(opc == 1){
      int atk, def, fuer, suer;
      cout << "Ingrese atk" << endl;
      cin >> atk;
      cout << "Ingrese def" << endl;
      cin >> def;
      cout << "Ingrese fuerza" << endl;
      cin >> fuer;
      cout << "Ingrese suerte" << endl;
      cin >> suer;

      cout << "Ingrese tipo de bender" << endl;
      int bend;

      cout << "1. Air" << endl << "2. Earth" << endl << "3. Water" << endl << "4. Fire" << endl;
      cin  >> bend;

      if(bend == 1){
        benders.push_back(new AirBender(atk, def, fuer, suer));
      }else if (bend == 2){
        benders.push_back(new EarthBender(atk, def, fuer, suer));
      }else if (bend == 3){
        benders.push_back(new WaterBender(atk, def, fuer, suer));
      }else if (bend == 4){
        benders.push_back(new FireBender(atk, def, fuer, suer));
      }
    }else if(opc == 2){
      cout << "P1 ingrese index de bender" << endl;
      int index;
      cin >> index;

      cout << "P2 ingrese index de bender" << endl;
      int index2;
      cin >> index2;

      while(index2 == index){
        cout << "Ingrese index de otro bender" << endl;
        cin >> index2;
      }

      bool seguir = true;
      int turno = 0;
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
            benders[index] -> Ataque(benders[index2]);
          }else if(opcion == 2){
            benders[index] -> AtaqueEspecial(benders[index2]);
          }else if(opcion == 3 && typeid(*benders[index]).name() == typeid(EarthBender).name()){
            ((EarthBender*)benders[index]) -> Espiar(benders[index2]);
          }else if(opcion == 3 && typeid(*benders[index]).name() == typeid(WaterBender).name()){
            ((WaterBender*)benders[index]) -> Heal();
          }else if(opcion == 4){
            seguir = false;
          }
        }else{//turno de nemder 2
          cout << "Turno de bender 2" << endl;

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
            benders[index2] -> Ataque(benders[index]);
          }else if(opcion == 2){
            benders[index2] -> AtaqueEspecial(benders[index]);
          }else if(opcion == 3 && typeid(*benders[index2]).name() == typeid(EarthBender).name()){
            ((EarthBender*)benders[index2]) -> Espiar(benders[index]);
          }else if(opcion == 3 && typeid(*benders[index2]).name() == typeid(WaterBender).name()){
            ((WaterBender*)benders[index2]) -> Heal();
          }else if(opcion == 4){
            seguir = false;
          }
        }

        ++turno;
        cout << "counter turno " << turno << endl;

        if(benders[index] -> getDefensa() <= 0){//para detectar si alguien gano
          cout << "Gano el bender 2" << endl;
          seguir = false;
        }
        if(benders[index2] -> getDefensa() <= 0){
          cout << "Gano el bender 1" << endl;
          seguir = false;
        }

      }
    }
  }





  return 0;
}

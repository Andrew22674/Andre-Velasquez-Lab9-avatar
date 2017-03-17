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

  benders.add(new AirBender(100, 80, 50, 8));
  benders.add(new EarthBender(90, 90, 111, 4));
  benders.add(new WaterBender(80, 100, 100, 6));
  benders.add(new FireBender(95, 105, 40, 3));


  return 0;
}

Lab9: Main.o Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o
	g++ Main.o Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o -o Lab9

Main.o: Main.cpp Bender.h AirBender.h EarthBender.h WaterBender.h FireBender.h
	g++ Main.cpp

Bender.o: Bender.cpp Bender.h
	g++ Bender.cpp

AirBender.o: AirBender.cpp AirBender.h Bender.h
	g++ AirBender.cpp

EarthBender.o: EarthBender.cpp EarthBender.h Bender.h
	g++ EarthBender.cpp

WaterBender.o: WaterBender.cpp WaterBender.h Bender.h
	g++ WaterBender.cpp

FireBender.o: FireBender.cpp FireBender.cpp Bender.h
	g++ FireBender.cpp

clean:
	rm *.o Lab9

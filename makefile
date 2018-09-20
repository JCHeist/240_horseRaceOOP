horseRace: main.o race.o horse.o
	g++ -c main.o horse.o -o horseRace

main.o: main.cpp race.h horse.h
	g++ -c race.cpp

race.o: race.cpp race.h horse.h
	g++ -c horse.cpp

clean:
	rm *.o
	rm horseRace

run: horseRace
	./horseRace

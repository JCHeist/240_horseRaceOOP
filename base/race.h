Race(int length); #ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include <sstream>
#include "horse.h"

class Race {

	private:
		Horse horses[5];
		int length;
		bool keepGoing;
	public:
		Race();
		Race(int length);	
		void printLane(int horseNumber);
		void start();


};


#endif

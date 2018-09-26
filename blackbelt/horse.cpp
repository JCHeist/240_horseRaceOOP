//horse.cpp


#include "horse.h"


#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iostream>


Horse::Horse() {

	Horse::position = 0;//start horse position at 0
}

	
void Horse::advance() {

       	int result;//declare variable to return

       	result = std::rand() % 2;//generate a random number between 0 and the max rand number. if odd, return 1 if even return 0
       	
	Horse::position = Horse::position + result;
	
	
}

int Horse::getPosition(){

	return Horse::position;

}




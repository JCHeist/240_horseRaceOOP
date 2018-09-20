#include "race.h"
#include "horse.h"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Race::Race(){
	
	Race::length = 15;

}

Race::Race(int length){

	Race::length =  length;

}

void printLane(int horseNumber){
	 std::stringstream track;//create variable
        int i;
        //go through each possible spot in the track for selected horse
        for(i = 0; i < Race::length; i ++){
                //check if horse is there.
                if(horses[horseNumber].getPosition == i){

                         track << horse;//if the horse is there print horse number


                }else{
                        track << ".";//if the horse is not there print a period

                }

        }
        std::cout << track.str() <<  std::endl;//new line


        if((horses[horseNumber].getPosition == length) && (keepGoing == true)){//check to see if the horse has won (is past space 15) and another horse has not yet

                std::cout << "Horse " << horse << " wins!!" << std::endl;//print message that this horse has won
                keepGoing = false;//stop taking turns in the race. it has ended

        }

}

void start(){
	
	std::srand(time(NULL));//set random seed based off of current time   

}

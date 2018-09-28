#include "race.h"

#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

Race::Race(){
	
	Race::length = 15;
	Race::keepGoing = true;

}

Race::Race(int length){

	Race::length =  length;

}

void Race::printLane(int horseNumber){
	std::stringstream track;//create variable
        int i;

        //go through each possible spot in the track for selected horse
        for(i = 0; i < Race::length; i ++){
                //check if horse is there.
                if(horses[horseNumber].getPosition() == i){

                         track << horseNumber;//if the horse is there print horse number


                }else{
                        track << ".";//if the horse is not there print a period

                }

        }
        std::cout << track.str() <<  std::endl;//new line


        if((horses[horseNumber].getPosition() == Race::length) && (keepGoing == true)){//check to see if the horse has won (is past space 15) and another horse has not yet

                std::cout << "Horse " << horseNumber << " wins!!" << std::endl;//print message that this horse has won
                keepGoing = false;//stop taking turns in the race. it has ended

        }

}

void Race::start(){	
	std::srand(time(NULL));//set random seed based off of current time   

	int i;
	
	std::ofstream openedFile;
	openedFile.open("account.dat");
	std::string hold;

		if(!openedFile.eof()){
	
			openedFile.getLine(openedFile, hold);
			

		}else{



		}
	
	//declare variables for for loop

	int coin;
	std::cout << std::endl << "Ready... Set... GO!!!" << std::endl;
	
	//take a turn by going throgh each horse
	while(Race::keepGoing){

		for(i = 0; i < 5; i++){//look at every horse's spot
			
			Race::horses[i].Horse::advance();
			Race::printLane(i);//print the track of this horse
		} 
		std::cout << std::endl;		//leave space for next turn

		//create bool to say whether enter is pressed or not		
		bool enter = false;

		std::string resp = "";//ensure resp is nothing. this means just enter was pressed		


		while(enter == false){//while enter is not pressed keep asking for enter
		

			if(Race::keepGoing == true){

				std::cout << "Press RETURN to advance a turn!";
			}else{

				std::cout << "Press enter to end the race.";				

			}
			getline(std::cin, resp);//ask for enter each time that is not all that is pressed
			
			if(resp == ""){

				enter = true;//enter has been pressed
	
			}
		}
	}
}
int Race::changeAccount(){	

	std::ofstream openedFile;
	

	openedfile.open("account.dat");

}



/* GROUP 4 MAIN FILE */

#include "ew_header.h"

void main(void){
        Location eastWestMap[LOCATIONS]; // An array of city nodes
	char origin[MAXSTRING];
	char destination[MAXSTRING];

	initializeMap(eastWestMap);
        inputCheck("Hello!, please enter the origin: ", origin, eastWestMap);
        inputCheck("Please enter the destination: ", destination, eastWestMap);
       	printRoute(origin, destination, eastWestMap); //Function which prints cities between origin and destination

}


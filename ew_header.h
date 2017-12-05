#include <stdio.h>
#include <string.h>

#define MAXSTRING 15  //The maximum number of characters for a string
#define LOCATIONS 12  //The number of cites on i26.

// Location node
typedef struct Location{
        char name[MAXSTRING];
        struct Location *east;
        struct Location *west;
        struct Location *north;
        struct Location *south;
}Location;

Location initializeMap(Location map[]);
void inputCheck(char message[], char input[MAXSTRING], Location map[]);
void printRoute(char *From, char *To, Location cities[]);



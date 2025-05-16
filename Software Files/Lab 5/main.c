/* 
* Lab Name: Coleman Beggs
* Lab #3:
*/

/*Include files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String manipulations
#include <math.h> // Math that's more than basic arithmetic
#include <ctype.h> // Character testing
#include "helper.h" // User Defined header file

// Code 1:

/*Function Declarations*/
void OutputInit(void);

int main(void)
{
	/*Setup Launchpad for Printf & Scanf*/
	OutputInit(); 
	
	// Declare the laser struct
	struct systems lasers[4];
	
	// Start assign values to struct
	// First row of table
	strcpy(lasers[0].name, "OPA Front");
	lasers[0].ecl = 3;
	lasers[0].pop = 289;
	lasers[0].orp = 0.30;
	// Second row of table
	strcpy(lasers[1].name, "Stretcher Amp");
	lasers[1].ecl = 2;
	lasers[1].pop = 200;
	lasers[1].orp = 0.25;
	// Third row of table
	strcpy(lasers[2].name, "Long Pulse");
	lasers[2].ecl = 4;
	lasers[2].pop = 170;
	lasers[2].orp = 0.33;
	// Foruth row of table
	strcpy(lasers[3].name, "Target Chamber");
	lasers[3].ecl = 3;
	lasers[3].pop = 236;
	lasers[3].orp = 0.15;
	// End assign values to struct
	
	// Declare variables
	int len = 4; // Initialize Length of the struct array
	int i; // Declare For loop iteration variable
	
	// Display top line
	printf("The laser systems can be upgraded:\n\r");
	
	//Start Display cost and elligibility
	for (i = 0; i < len; i++)
	{
		// Condition for displaying system upgrade elligibility and cost
		(upgradeElligibility(lasers[i]))?printf("%s which costs $%0.2f\n\r", lasers[i].name, upgradeCost(lasers[i])):printf("\r");	
	}
	// End Display of cost and elligibility
	
	while(1);
 }

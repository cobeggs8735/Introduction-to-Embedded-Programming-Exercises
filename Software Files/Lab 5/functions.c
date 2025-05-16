#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String manipulations
#include <math.h> // Math that's more than basic arithmetic
#include <ctype.h> // Character testing
#include "helper.h"

// Start Function to determine cost of upgrade
 float upgradeCost(struct systems laser)
{
	float cost = ((laser.ecl*300.00) + (laser.pop/100.5*10000))*laser.orp;
	return (float)cost;
};
// End Function to determine cost of upgrade
 
// Start Function for which systems are elligible for upgrades
int upgradeElligibility (struct systems laser)
{
	int i;
	if (((laser.ecl == 2) || (laser.ecl == 3)) && (laser.pop < 260) && (laser.orp < (float)0.30))
	{
		// When laser is elligible for upgrade
		i = 1;
	}
	else
	{
		// When laser isn't elligible for upgrade
		i = 0;
	}
	return (int)i; // Returns 1 for true and 0 for false
};
// End Function for which systems are elligible for upgrades

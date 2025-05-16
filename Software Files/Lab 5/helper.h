#ifndef HELPER_H
#define HELPER_H


// struct definitions

// Start Strutuce Definition
struct systems
{
	char name[20]; // System Name
	int ecl; // Energy Class Level
	int pop; // Peak Output Power
	float orp; // Optical Replacement Percentage
};
// End Structure Definition

// Function declarations
void OutputInit(void);

// Declare Function to determine cost of upgrade
float upgradeCost(struct systems laser);

// Declare Function for which systems are elligible for upgrades
int upgradeElligibility (struct systems laser);

#endif



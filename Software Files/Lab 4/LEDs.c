#include "msp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String manipulations
#include <math.h> // Math that's more than basic arithmetic
#include <ctype.h> // Character testing

// Define function for delay
void timer(int ms)
{
	float time;
	time = ((float)ms/(float)1000.00*3000000) - 1; // Delay time
	// SetUp SysTick
	SysTick -> CTRL |= 0x04; // System clock, and not enabled yet
	SysTick -> LOAD = time; // SetUp the time to delay
	SysTick -> CTRL |= 0x01; // Enable clock
	while ((SysTick -> CTRL & 0x10000) == 0)
	{
		// Wait while COUNTFLAG is zero
	}
	SysTick -> CTRL &= ~0x01; // Disable clock
	return; 	
};

// Define function for Digital initializations
void setUp(void)
{
	// SetUp digital ports
	// Port 2: pin 0, pin 1, pin 2
	P2 -> SEL0 &= ~0x07; // pin0 Red, pin1 Green, pin2 Blue: 0000 0111
	P2 -> SEL1 &= ~0x07; // pin0 Red, pin1 Green, pin2 Blue: 0000 0111
	
	// Port 1: pin0, pin 1, pin 4
	P1 -> SEL0 &= ~0x13; // pin0 Red LED, pin1 S1, pin4 S2: 0001 0011
	P1 -> SEL1 &= ~0x13; // pin0 Red LED, pin1 S1, pin4 S2: 0001 0011
	
	// SetUp outputs
	P1 -> DIR |= 0x01; // Port1 LED to output
	P2 -> DIR |= 0x07; // Port2 LEDs to outputs
	
	// SetUp inputs
	P1 -> DIR &= ~0x12; // Buttons to inputs
	P1 -> REN |= 0x12; // Resistor 0 for buttons
	P1 -> OUT |= 0x12; // Set pull up for both the pins
	return;
};

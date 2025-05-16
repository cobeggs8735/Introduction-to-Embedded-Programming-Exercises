#include "msp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String manipulations
#include <math.h> // Math that's more than basic arithmetic
#include <ctype.h> // Character testing

/* Function declarations */
// Declare Function for delay 
void timer(int ms);

// Declare Function for digital initalizes
void setUp(void);

int main()
{
	/* Place Code that runs once here */
	setUp(); // Run SetUp Function
	
	while (1)
	{
		/* Place Code to run repeatedly */
		if (((P1 -> IN & 0x02) == 0) && ((P1 -> IN & 0x10) != 0))// Check if S1 is pressed
		{
			// Turn off Red LED in port 0
			P1 -> OUT &= ~0x01; // Turn off the LED

			// Blue LED lights up Port2 pin2
			P2 -> OUT |= 0x04; // Turn on pin2: 0000 0100
			P2 -> OUT &= ~0x04; // Turn off Blue LED
		}
		else if(((P1 -> IN & 0x10) == 0) && ((P1 -> IN & 0x02) != 0))// Check if S2 is pressed
		{
			// Turn off Red LED in port 0
			P1 -> OUT &= ~0x01; // Turn off the LED
			
			// Green LED lights up Port2 pin1
			P2 -> OUT |= 0x02; // Turn on pin2: 0000 0010
			P2 -> OUT &= ~0x02; // Turn off Green LED
		}
		else if ((P1 -> IN & 0x12) == 0)// Check if S1 & S2 are pressed
		{
			// Turn off Red LED in port 0
			P1 -> OUT &= ~0x01; // Turn off the LED
			
			// Red LED lights up Port2 pin0
			P2 -> OUT |= 0x01; // Turn on pin0: 0000 0001
			P2 -> OUT &= ~0x01; // Turn off Red LED
		}
		else 
		{
			// Blink the Red LED on Port1 pin0
			P1 -> OUT ^= 0x01; // Toggle the LED
			timer(250); // Toggle every 250 ms
		}
	}
}

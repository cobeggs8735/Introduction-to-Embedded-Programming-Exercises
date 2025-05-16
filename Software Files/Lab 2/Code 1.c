/* 
* Lab Names: Coleman Beggs
* Lab #2:
*/

/*Include files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // String manipulations
#include <math.h> // Math that's more than basic arithmetic
#include <ctype.h> // Character testing

/*Function Declarations*/
void OutputInit(void); 

int main(void)
	{
		/*Setup Launchpad for Printf & Scanf*/
		OutputInit(); 
		
		// Code 1:
		// Code 1 has been tested
		char cont; // Continue Blood Pressure variable
		// Start Blood Pressure
		do 
		{
			// Initialize variables
			int sbp, dbp; // Initialize SBP and DBP
			int calculation; // Initialize calculation type
			int pp; // Initialze Pulse Pressure
			float map; // Initalize MAP
			
			// Start SBP and DBP
			do // This one is working
			{
				printf("Enter your Systolic Blood Pressure (SBP) as an integer: ");
				scanf("%d", &sbp); // Stores sbp
				printf("Enter you Diastilic Blood Pressure (DBP) as an integer: ");
				scanf("%d", &dbp); // Stores dbp
				// Check entry
				if ((sbp <= 0) || (dbp <= 0)) // Incorrect entry
				{
					printf("Invalid entry. Please try again.\n\r"); 
					continue; 
					// Continue if incorrect entry
				}	
				else // Correct entry
				{
					break; // Break Loop
				}	
			} while ((sbp <=0) || (dbp <= 0)); // This one is working
			// End SBP and DBP
			
			// Start Blood Pressure Category
			if (sbp < 120 && dbp < 80) // Normal Category
			{
				char condition[] = "Normal"; 
				printf("Blood Pressure is %s\n\r", condition); // Display condition
			}	// This one is working
			else if (sbp <= 129 && dbp <80) // Elevated Category
			{
				char condition[] = "Elevated"; 
				printf("Blood Pressure is %s\n\r", condition); // Display condition
			}	// This one is working
			else if ((sbp <= 139 && dbp < 80) || (sbp < 130 && dbp <= 89)) // Hypertension Stage 1
			{
				char condition[] = "High Blood Pressure (Hypertension) Stage 1";
				printf("Blood Pressure is %s\n\r", condition); // Display condition
			}	// This one is working
			else if ((sbp > 140 && dbp <= 89) || (sbp < 140 && dbp > 90)) // Hypertension Stage 2
			{
				char condition[] = "High Blood Pressure (Hypertension) Stage 2"; 
				printf("Blood Pressure is %s\n\r", condition); // Display condition 	
			}	// This one is working
			// End Blood Pressure Category
			
			// Start Calculation Type
			do // This one works
			{
				printf("What calculation would you like to do?\n\r\t1. For Pulse Pressure (PP)\n\r\t2. For Mean Arterial Pressure (MAP).\n\r");
				scanf("%d", &calculation); // Gets calculation type
				if (calculation == 1)
				{
					pp = sbp - dbp; // PP Calculation
					printf("Pulse presure is %d\n\r", pp); // Display PP
					break; 
				}
				else if (calculation == 2)
				{
					map = 2*((float)sbp + (float)dbp)/3; // MAP Calculation
					printf("MAP is %.2f\n\r", map); // Display MAP
					break;
				}
				else
				{
					printf("Invalid calculation type. Please try again by entering a \"1\" or \"2\".\n\r"); // Error catching
				}
			} while ((calculation != 1) || (calculation != 2));
			// End Calculation Type
			
			// Start get cont variable
			do // This one is working
			{
				printf("Would you like to enter another SBP & DBP value? Type \"y\" for yes or \"n\" for no\n\r");
				scanf("%c", &cont); // Get cont variable
				if (cont == 'y')
				{
					break; // Break out of loop
				}
				else if (cont == 'n')
				{
					break; // Break out of loop
				}
				else
				{
					printf("Invalid entry. Please try again.\n\r"); // Error catch
					continue;
				}
			}while ((cont != 'y') || (cont != 'n')); 
			// End get cont variable
			
		} while (cont == 'y'); // Continue Blood Pressure analysis
		// End Blood Pressure 
		printf("Program done!\n\r\tHave a nice day!\n\r"); 
		// Program done
		
		while(1);
  }
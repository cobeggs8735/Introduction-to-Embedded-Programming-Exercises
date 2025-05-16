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
		
		// Code = 2 
    // Code 2 has been tested
    int section = 0; // Section number "one's" digit
    int i = 0; // Loop Iteration variable
    int j = 0; // Initalize total amount of grades
    int grade[3][3] = {{0, 0, 0}, // Section 101
                       {0, 0, 0}, // Section 102
                       {0, 0, 0}}; // Section 103
    int sectionTotal[3] = {0, 0, 0}; // Section Total array
    int classTotal = 0; // Initialize Class Total variable
    int p = 0; // Initalize amount of passing grades
    int f = 0; // Initalize amount of failing grades
    float sectionAvg[3] = {0, 0, 0}; // Section's average array
    float classAvg; // Class average variable
    
    for (section = 0; section < 3; section++)
    {
        printf("Enter grades for section 10%d\n\r", section + 1);
        i = 0; // Reset iteration variable
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &grade[section][i]); // User input grades
            sectionTotal[section] += grade[section][i]; // Adding to section total grade
            classTotal += grade[section][i]; // Adding to class total
            // Determine Pass or Fail 
            j += 1; // Adds one to total amount of grades 
            if (grade[section][i] >= 70)
            {
                p += 1; // Adds to amount of passing grades
            }
            else
            {
                f += 1; // Adds to amount of failing grades 
            }
        }
        sectionAvg[section] = (float)sectionTotal[section]/(float)(i); // Calculate current section average 
    }
    i = 0; // Reset iteration variable 
    for (i = 0; i < 3; i++)
    {
        printf("Section 10%d average %.2f\n\r", i+1, sectionAvg[i]); // Display section average 
    }
    classAvg = (float)(classTotal)/(float)(j); // Calculate class average 
    printf("Class average %.2f\n\r", classAvg);
    printf("The passing grade total is %d. The failing grade total is %d\n\r", p, f); // Display passing and failing
    // Prgram done
		
		while(1);
  }
	
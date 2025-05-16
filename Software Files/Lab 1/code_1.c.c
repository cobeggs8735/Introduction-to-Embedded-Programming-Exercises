/* 
* Lab Names: Coleman Beggs
* Lab #1:
*/

/*Include files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Function Declarations*/
void OutputInit(void); 

int main(void)
	{	
		
		/*Setup Launchpad for Printf & Scanf*/
		OutputInit(); 
		
		/* Place application code here */
		 
    //Code 1:
    
    int course = 269;
    char C[] = "C Coding.";
    float weeks = 5.858;
    char atSymbol = '@';
    
    printf("Practice using printf()\n\r\tESET %d Summer\n\r%s %.3f weeks to go\n\r%c", course, C, weeks, atSymbol);
		
		/*Go in waiting state. Will modify in later labs*/
		while(1);
  }

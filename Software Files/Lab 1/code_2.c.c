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
		
    //Code 2:
    
    char itemName[20];
    float basePrice, discount, tax;
    int quantity; 
    
    printf("Enter item name:");
    scanf("%s", itemName); //assigns itemName
    printf("Enter base price:");
    scanf("%f", &basePrice); //assigns basePrice
    printf("Enter quantity:");
    scanf("%d", &quantity); //assigns quantity
    printf("Enter discount as percent:");
    scanf("%f", &discount); //assigns discount
    printf("Enter sales tax as percent:");
    scanf("%f", &tax); //assigns sales tax
    
    strcpy(itemName, "Item Total"); //reassigns itemName
    
    discount /= 100;
    tax /= 100;
    float newPrice = basePrice - basePrice*discount;
    float totalPrice = newPrice*(1 + tax)*quantity;
    
    printf("%s cost is: $%.2f", itemName, totalPrice);
		
		/*Go in waiting state. Will modify in later labs*/
		while(1);
  }

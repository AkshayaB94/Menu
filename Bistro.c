#include<stdio.h>
main() 
{
	printf("Pick an item: \n1.Pizza \n2.Burger \n3.French fries \n4.Chocolate shake");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("You picked Pizza");
		break;
		
		case 2:
		printf("You picked Burger");
		break;
		
		case 3:
		printf("You picked French fries");
		break;
		
		case 5:
		printf("You picked Chocolate shake");
		break;
		default : printf("Invalid choice");
		}
}
 

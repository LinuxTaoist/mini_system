#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../Inc/calculator.h"
void main()
{
	 
	int i=0,user_choice;
	char choice_num;
	while (1)
	{	
		system("clear");
		printf("********** Welcome to the mini system ********** \n\n");
		printf("***  The function: \n\n");
		printf("***  1: Calculator \n\n");
		printf("***  2: Notepad  \n\n");
        printf("***  q: Quit system \n\n");
		printf("************************************************ \n\n");
		printf("Please input yours choice: \n");
		scanf("%c", &choice_num);
		switch (choice_num)
		{
			case '1':
				calculator();
				break;
			case 'q':
				user_choice=0xFF;
				break;
			default:
				printf("No such function!\n");
		}
		if (user_choice==0xFF){
           	system("clear");
			break;
		}
	}		
	
}

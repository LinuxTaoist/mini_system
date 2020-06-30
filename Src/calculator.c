#include <stdio.h>
#include "../Inc/calculator.h"

void calculator()
{
	int num1,num2,sum;
	char operat,err_flag=0,choice;
	while(1)
	{
		system("clear");
 	   	printf("=====================================================\n");
		printf("\n>>>>>>>>>>|    CALCULATOR FUNCTION    |<<<<<<<<<<\n");
		printf("\n  >>>|  Please input the first num: ");
		while(scanf("%d",&num1)!=1)
		{
			getchar();
			printf("\n  >>>|  Input error!\n");
			printf("\n  >>>|  Input resume enter: ");
		}
		printf("\n\n  >>>|  Please input the second num: ");
		while(scanf("%d",&num2)!=1)
		{
			getchar();
            printf("\n  >>>|  Input error!\n");
            printf("\n  >>>|  Input resume enter: ");

		}
		printf("\n\n  >>>|  Please choose '+' '-' '*' '/':");
		getchar();
		while(scanf("%c",&operat)!=1);
		getchar();
		switch(operat)
		{
			case '+':
				sum=num1+num2;break;
			case '-':
         	   sum=num1-num2;break;
        	case '*':
        	    sum=num1*num2;break;
        	case '/':
        	    sum=num1/num2;break;
			default:
				err_flag=0X01;
				printf("\n  >>>|  Input error!\n\n");
		}
		if(!err_flag)
		{
			printf("\n  >>>|  The answer:");
			printf(" %d%c%d = %d\n\n",num1,operat,num2,sum);	
		
		}
		else
		{
			switch(err_flag)
			{
				case 0X01: printf("Input operation symbol error!");
			}
	
		}
	 	printf("\n=====================================================\n");
		printf("\n  >>>|Continue or break y/n? :  ");
		scanf("%c",&choice);
		if(choice=='y'||choice=='Y')		continue;
		else if(choice=='n'||choice=='N')	break;
		
	}
}


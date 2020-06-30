#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../Inc/notepad.h"

const char pathname="../notepad_operation.txt";

int notepad_oprt( )
{
	int fd;
	char choice_num;
	printf("***  1. Add characters \n\n")
	printf("***  2. Delete characters \n\n");
	printf("***  3. Modify notepad \n\n");
	printf("***  4. View notepad \n\n");
	printf("***  q. Quit notepad operation \n\n");
	printf("************************************************ \n\n");
    printf("**********  Please input your choice  ********** \n\n");
	scanf("%d",&choice_num);
	switch (choice_num)
	{
		case '1':
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lock()
{
	int i;
	char entryU[10], entryP[10], user[10] = "123", pass[10] = "123";
	do{
	printf("Entre o usuario \n");
	scanf("%s", entryU);
	printf("Entre a senha \n");
	scanf("%s", entryP);
	int userN = atoi(user);
	int passN = atoi(pass);
	int entryNU = atoi(entryU);
	int entryNP = atoi(entryP);
	
	
	if(entryNU == userN && entryNP == passN)
	{
		printf("\n Voce esta loggado \n");
		
		i++;
	}
	else
	{
		printf("\n You failed lol quit \n");
		i = 0;
	}
	}while(i==0);
	return 0;

}

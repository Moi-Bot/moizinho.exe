#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int fibo (int num)
{
	if(num == 1 || num == 2)
	{
		return (1);
	}
	else if(num == 0)
	{
		return (0);
	}
	else
	{
		 return (fibo(num-1) + fibo(num-2));
	}
}



int main()
{
	int num,fibinho, i;
	
	printf("Insira a quantidade de termos: \n");
	scanf("%i", &num);
	printf("_______________________________\n\n");
	
	
	for(i=0;i<num;i++)
	{
	//	fibinho = fibo(i);
		printf("%i \n", fibo(i));
	}
	getch();
}

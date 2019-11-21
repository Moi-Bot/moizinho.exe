#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int fib(int fibonacci)
{
	int i, ant, atual, seg;
	
	
	if (fibonacci == 1)
	{
		return (0);
	}
	else if (fibonacci == 2)
	{
		return (1);
	}
		else
		{
			ant = 0;
			atual = 1; 
		
			for(i=0;i<=fibonacci;i++)
			{
				seg = atual + ant;
				ant = atual;
				atual = seg;
			}
		}
	
	return (atual);
}

int main()
{
	int num, fibon;
	
	printf("Insira o num que deseja calcular ordem de fibonacci : \n");
	scanf("%i", &num);
	
	fibon = fib(num);
	
	printf("calculo fibonacci de %i: %i", num, fibon);
}

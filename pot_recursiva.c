#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int pot (int base, int exp)
{
	if( exp == 0 && base!=0)
	{
		return (1);
	}
	else
	{
		return (base * pot(base, exp - 1));
	}
}

int main() 
{
	int base, exp;
	
	printf("Base: \n");
	scanf("%i", &base);
	printf("Expoente:\n");
	scanf("%i", &exp);
	printf("______________________\n");
	
	printf("Resultado da potenciacao: %i", pot(base, exp));
}

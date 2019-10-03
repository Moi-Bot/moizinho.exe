#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main ()
{
  setlocale(LC_ALL, "PORTUGUESE");
	
int idade;
float pag = 100;

	printf("Informe idade: \n");
	scanf("%i", &idade);
	
	if( idade > 0)
	{
		
		switch(idade)
		{
			case 0 ... 9:
			pag = pag + 80.00;
			break;
		
			case 10 ... 39:
			pag = pag + 50.00;
			break;
		
			case 40 ... 60:
			pag = pag + 95.00;
			break;
		
			default:
			pag = pag + 130.00;
			break;
		
		}
	}
	printf("O total a pagar é : R$ %.2f", pag);

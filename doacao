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
	
int idade, dias;
float peso;
char doente;
		
	printf("Possui doença transmissível (S/N): \n");
	scanf("%s", &doente);
	if(doente == 'N' || doente == 'n')
	{
		printf("Informe idade: \n");
		scanf("%i", &idade);
		
		if(idade>=18 && idade<=67)
		{
			printf("Quantos dias desde a ultima doação? \n");
			scanf("%i", &dias);
			
			if(dias > 90)
			{
					printf("Informe peso: \n");
					scanf("%f", &peso);
				
				if(peso >= 50.00)
				{
					printf("Apto para doação!!");
				}
				else
				{
					printf("Precisa engordar!");
				}
				
			}
			else
			{
			printf("Espera mais uns dias!");
			}
				
		}
		else
		{
			printf("Idade não permitida!");
		}
	}
	else
	{		
		printf("Ta querendo contaminar os outros é? '-' ");
	}
		
	system("pause");
}

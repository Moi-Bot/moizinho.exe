#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
 
int maior (int v1, int v2, int v3)
{
	if ((v1 > v2) && (v1>v3))
	{
		return v1;
	}
	else if ((v2>v1) && (v2>v3))
	  {
		return  v2;
      }
	else
	{
		return v3;
	}
}
	
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int n1, n2, n3, soutiamericamemes;
	
	printf("Informe o valor 1: \n");
	scanf("%i",&n1);
	printf("Informe o valor 2: \n");
	scanf("%i",&n2);
	printf("Informe o valor 3: \n");
	scanf("%i",&n3);
	
	soutiamericamemes = maior(n1, n2, n3);
	
	printf("\n\nO maior valor é: %i\n\n", soutiamericamemes);
	printf("###CÓPIA NÃO COMÉDIA###\n");
	printf("FALEI QUE O SAM ERA BRABO NÃO FALEI ;-;\n");
	
	
}

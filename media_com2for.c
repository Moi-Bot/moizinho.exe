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
	
	int i, j; 
	float notas[4][5], media=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Informe a %dº nota do %iº aluno: \n", j+1, i+1);
			scanf("%f", &notas[i][j]);
			media = media + notas[i][j];
		}
		media = media / 5;
		printf("\n\nA média do %iº aluno é: %.2f", i+1, media);
		media = 0;
		getch();
		system("cls");
	}
}

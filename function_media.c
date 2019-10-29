#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

float media( float notas_A[], int n)
{
	int i = 0;
	float  m = 0.0;
	
	for(i=0; i<n;i++)
	{
		m = m + notas_A[i];
	}
	m = m / n;
	return m;
}

void main()
{
	float media_turma;
	int i, n;
	printf("Informe o número de alunos:\n");
	scanf("%i", &n);
	float notas[n];
	
	for(i=0;i<n;i++)
	{
		printf("Digite a nota do aluno 1: \n", i+1);
		scanf("%f", &notas[i]);
	}
	media_turma=media(notas, n);
	
	printf("A média da turma é %.2f\n", media_turma);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float nota1, nota2, media;
	
	//Lê as notas dos alunos
	printf("Informe a primeira nota: \n");
		scanf("%f", &nota1);
	printf("Informe a segunda nota: \n");
		scanf("%f", &nota2);
	
	//calcula a média aritmética
	media = (nota1 + nota2) / 2;

/* Verifica se o aluno foi aprovado ou não e apresentar sua média final */
	if(media >= 7)
	{
	
		printf("Aluno APROVADO!!!\nMedia final: %.2f \n", media);
	}
	else
	{

		printf("Aluno APROVADO!!!\nMedia final: %.2f \n",media);
	}
	system ("pause");
	
}

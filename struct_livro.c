#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct livro {
	char tit[20], area[20] ;
	int ano, pag;
	float preco;
};
int main () 
{
	struct livro l[2];
	int i, livros, arm_pag;
	float media;
	for(i=0;i<2;i++)
	{
		printf("informe o Titulo do livro %i: \n", i+1);
		fflush(stdin);
		gets(l[i].tit);
		printf("Informe area: \n");
		fflush(stdin);
		gets(l[i].area);
		printf("Informe o ano de edicao: \n");
		fflush(stdin);
		scanf("%i", &l[i].ano);
		printf("Informe o numero de paginas:\n");
		fflush(stdin);
		scanf("%i", &l[i].pag);
		printf("Informe o preco:\n");
		fflush(stdin);
		scanf("%f", &l[i].preco);
		arm_pag = arm_pag + l[i].pag;
		
	}
	media = arm_pag / 2;
	arm_pag = 0;
	printf("Media de paginas de %i livros: %.2f", i+1, media );
	
	for(i=0;i<2;i++)
	{
		printf("Titulo: %s\n", l[i].tit);
		printf("area: %s\n", l[i].area);
		printf("Ano de edicao: %i\n", l[i].ano);
		printf("Numero de paginas: %i\n", l[i].pag);
		printf("preco: R$%.2f\n", l[i].preco);
	}
}

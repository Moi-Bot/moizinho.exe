
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

caso_menu ()
{
	//definindo os preços para ficar mais facil para futuras mudanças
	#define p_espresso 1.00
	#define p_leite 2.00
	#define p_machiatto 3.00
	#define p_choco 4.00
	#define p_capuccino 5.00
	setlocale(LC_ALL, "PORTUGUESE");
	
	float tot=0, pag[100];
	int i, y=0, j=0, qtd[100], cod;
	char pedido[100][25];
	
	
	printf(" _________      M E N U       _________\n");
	printf("|                                      |\n");
	printf("| Cod 1 ........... Espresso - R$ %.2f |\n", p_espresso );
	printf("| Cod 2 .......... Com leite - R$ %.2f |\n", p_leite);
	printf("| Cod 3 .......... Machiatto - R$ %.2f |\n", p_machiatto);
	printf("| Cod 4 ....... Choco Quente - R$ %.2f |\n", p_choco);
	printf("| Cod 5 .......... Capuccino - R$ %.2f |\n", p_capuccino);
	printf("|                                      |\n");
	printf("|______________________________________|\n\n");
	
	printf("-----------------------------------------\n");
	printf(" INFORME O CÓDIGO DO ITEM DESEJADO \n OU DIGITE '0' PARA ENCERRAR O PEDIDO.\n");
	do {//ínicio do "do while".
	printf("Código:\n");
	scanf("%i", &cod);
		if(cod >5)
		{
			printf("###################\n");
			printf("Código Inválido!!\n");
			printf("###################\n");
		}
	
		// início switch case do menu.
		switch(cod)
			{
				case 1:
				printf("Informe quantidade: \n");
				scanf("%i", &qtd[i]);
				tot = tot + (p_espresso*qtd[i]);
				strcpy(pedido[i], "Espresso");
				pag[i] = p_espresso;
				i++;
				break;
			
				case 2:
				printf("Informe quantidade: \n");
				scanf("%i", &qtd[i]);
				tot = tot + (p_leite*qtd[i]);
				strcpy(pedido[i], "Café com Leite");
				pag[i] = p_leite;
				i++;
				break;
			
				case 3:
				printf("Informe quantidade: \n");
				scanf("%i", &qtd[i]);
				tot = tot + (p_machiatto*qtd[i]);
				strcpy(pedido[i], "Machiatto");	
				pag[i] = p_machiatto;
				i++;
				break;
				
				case 4:
				printf("Informe quantidade: \n");
				scanf("%i", &qtd[i]);
				tot = tot + (p_choco*qtd[i]);
				strcpy(pedido[i], "Choco quente");
				pag[i] = p_choco;
				i++;
				break;
				
				case 5:
				printf("Informe quantidade: \n");
				scanf("%i", &qtd[i]);
				tot = tot + (p_capuccino*qtd[i]);
				strcpy(pedido[i], "Capuccino");
				pag[i] = p_capuccino;
				i++;
				break;
			
			
			}//fim switch case
			
        y++;//contador printar a quantidade certa de items no laço for.
        
		}
		while (cod != 0);//fim do while
		printf("\n-------------------------------\n");
		
		system("cls");
		system("color 60");
		
		printf("CONTA\n");
		for (i=1;i<y;i++)// for pra printar quantidade, itens, preços  e total.
		{
		printf(" %i %s ..................... R$ %.2f\n", qtd[i], pedido[i], pag[i]);
		}
		printf("                             TOTAL: R$ %.2f\n", tot);
}


int main () // POODE APAGAR ISSO HENRIQUE. USEI SÓ PRA PODER CHAMAR A FUNÇÃO HEHEHE
{//Digita 's' pra chamar o menu.
	char r;
	 
	scanf("%s", &r);
	if(r == 's')
	{
		caso_menu();
	}
	
	
	getch();
}

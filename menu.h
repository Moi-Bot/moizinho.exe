
#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>
#include <locale.h>

int menuses()
{
	//definindo os preços para ficar mais facil para futuras mudanças
	#define p_espresso 1.00
	#define p_leite 2.00
	#define p_machiatto 3.00
	#define p_choco 4.00
	#define p_capuccino 5.00
	setlocale(LC_ALL, "PORTUGUESE");
	system("color 6");
	
	float tot=0, pag[100];
	int i, y=0, j=0, qtd[100], cod;
	//float p_espresso=1.00, p_leite=2.00,  p_machiatto=3.00, p_choco=4.00, p_capuccino=5.00;
	char pedido[100][25];
	
	//"limpando os arrays, setando o espaço de memória em '0'.
	memset(pag, 0, sizeof(pag));
	memset(qtd, 0, sizeof(qtd));
	memset(pedido, 0, sizeof(pedido));
	
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
				scanf("%d", &qtd[cod]);
				
				strcpy(pedido[cod], "Espresso");
				pag[cod] = p_espresso;
				tot = tot + (qtd[cod]*p_espresso);
				cod++;
				break;
			
				case 2:
				printf("Informe quantidade: \n");
				scanf("%d", &qtd[cod]);
				
				strcpy(pedido[cod], "Café com Leite");
				pag[cod] = p_leite;
				tot = tot + (qtd[cod]*p_leite);
				cod++;
				break;
			
				case 3:
				printf("Informe quantidade: \n");
				scanf("%d", &qtd[cod]);
				
				strcpy(pedido[cod], "Machiatto");	
				pag[cod] = p_machiatto;
				tot = tot + (qtd[cod]*p_machiatto);
				cod++;
				break;
				
				case 4:
				printf("Informe quantidade: \n");
				scanf("%d", &qtd[cod]);
				
				strcpy(pedido[cod], "Choco quente");
				pag[cod] = p_choco;
				tot = tot + (qtd[cod]*p_choco);
				cod++;
				break;
				
				case 5:
				printf("Informe quantidade: \n");
				scanf("%d", &qtd[cod]);
				
				strcpy(pedido[cod], "Capuccino");
				pag[cod] = p_capuccino;
				tot = tot + (qtd[cod]*p_capuccino);
				cod++;
				break;
			
			
			}//fim switch case
			
        y++;//contador printar a quantidade certa de items no laço for.
        
		}
		while (cod != 0);//fim do while
		printf("\n-------------------------------\n");
		
		system("cls");
		
		printf("CONTA\n");
                
		/*for(i=0;i<5;i++)
		{
		 tot = tot + (qtd[i]*pag[i]);
		} */
		for(i=1;i<y;i++)// for pra printar quantidade, itens, preços  e total.
		{
		//if (qtd[i] > 0)//só vai printar se qtd for maior que 0.
		//{	
		printf(" %d %s ..................... R$ %.2f\n", qtd[i], pedido[i], pag[i]);
		//}
		}
		printf("                             TOTAL: R$ %.2f\n", tot);
}



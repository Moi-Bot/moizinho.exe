float area_quadrado(float lado)
{
	float result = 0.0;
	result = (lado*lado);
	return result;
}

float area_triang_ret(float lado1, float lado2)
{
	float result = 0.0;
	result = (lado1*lado2)/2;
	return result;
}

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

//########################################################
//Menu 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int menu()
{
	int escolha;
	
	
	do
	{
		printf("                 __,__\n");
     printf("   .--.  .-"     "-.  .--.\n");
    printf("   / .. \/  .-. .-.  \/ .. \\\n");
    printf("  | |  '|  /   Y   \  |'  | |\n");
    printf("  | \   \  \ 0 | 0 /  /   / |\n");
    printf("   \ '- ,\.- `` ``-./, -' /\n");
    printf("    `'-' /_   ^ ^   _\ '-'`\n");
    printf("    .--'|  \._ _ _./  |'--. \n");
    printf("  /`    \   \.-.  /   /    `\\\n");
   printf("  /       '._/  |-' _.'       \\\n");
   printf(" /          ;  /--~'   |       \\\n");
  printf(" /        .'\|.-\--.     \       \\\n");
 printf(" /   .'-. /.-.;\  |\|'~'-.|\       \\\n");
 printf(" \       `-./`|_\_/ `     `\'.      \\\n");
  printf(" '.      ;     ___)        '.`;    /\n");
  printf("   '-.,_ ;     ___)          \\/  /\n");
   printf("   \   ``'------'\       \\  `  /\n");
   printf("    '.    \       '.      |   ;/_\n");
printf("jgs  ___>     '.       \_ _ _/   ,  '--.\n");
  printf(" .'   '.   .-~~~~~-. /     |--'`~~-.  \\\n");
 printf(" // / .---'/  .-~~-._/ / / /---..__.'  /\n");
 printf("((_(_/    /  /      (_(_(_(---.__    .'\n");
 printf("          | |     _              `~~`\n");
 printf("          | |     \'.\n");
 printf("           \ '....' |\n");
 printf("            '.,___.'\n");
		
		printf("\n ########## ESCOLHA UM OPÇÃO #############\N");
		printf("\n (1) Para opção 1 - CAFÉ" );
		printf("\n (2) Para opção 2 - SALGADOS" );
		printf("\n (3) Para opção 3 - DOCES\n");
		scanf("%i", &escolha);
		
	} while((escolha<1)||(escolha>3));
	
	return escolha;
	
};

float cafes () {
	
		int cf = 0, quant = 0;
		float custoC = 0, tot = 0;
		
		printf("\n ########## ESCOLHA UM TIPO DE CAFÉ #############\N");
		printf("\n (1) Para opção 1 - CAFÉ EXPRESSO - R$3,50");
		printf("\n (2) Para opção 2 - CAFÉ COM LEITE - R$2,50");
		printf("\n (3) Para opção 3 - CAPUTINO -  R$4,00");
		printf("\n (4) Para opção 4 - CAFÉ PEQUENO -  R$2,00\n");
		
		scanf("%i", &cf);
		
		switch (cf)
		
		{
			case 1:
			
			custoC = 3.50;
			break;
			
			case 2:
			
			custoC = 2.50;
			break;
			
			case 3:
			
			custoC = 4.00;
			break;
			
			case 4:
			
			custoC = 2.00;
			break;
						
		}
		
		 printf("\n Favor informar a quantidade desejada: ");
		 scanf("%i", &quant);
		 custoC = custoC*quant;	
		 
	return custoC;
	
};
	
	
	float salga () 
	{
	
		int sal, qt;
		float custoS;
		
		printf("\n ########## ESCOLHA UM TIPO DE SALGADOS #############\N");
		printf("\n (1) Para opção 1 - SALGADO ASSADO - R$5,50");
		printf("\n (2) Para opção 2 -PAO DE QUEIJO - R$3,50");
		printf("\n (3) Para opção 3 - COXINHA -  R$4,00");
		printf("\n (4) Para opção 4 - QUIBE -  R$4,20\n");
		
		scanf("%i", &sal);
		
		switch (sal)
		
		{case 1:
			
			custoS = 5.50;
			break;
			
			case 2:
			
			custoS = 3.50;
			break;
			
			case 3:
			
			custoS = 4.00;
			break;
			
			case 4:
			
			custoS = 4.20;
			break;
			
					
		}
		
		 printf("\n Favor informar q quantidade desejada: ");
		 scanf("%i", &qt);
		 custoS = custoS*qt;
		 		
	return custoS;
};



float doces () 
	{
	
		int doc, qtd;
		float custoD;
		
		printf("\n ########## ESCOLHA UM TIPO DE SALGADOS #############\N");
		printf("\n (1) Para opção 1 - BRIGADEIRO - R$3,50");
		printf("\n (2) Para opção 2 - DOIS AMORES - R$3,80");
		printf("\n (3) Para opção 3 - CHOCOLATE LAKA -  R$4,00");
		printf("\n (4) Para opção 4 - BOLO -  R$4,15\n");
		
		scanf("%i", &doc);
		
		switch (doc)
		
		{
		case 1:
			
			custoD = 3.50;
			break;
			
			case 2:
			
			custoD = 3.80;
			break;
			
			case 3:
			
			custoD = 4.00;
			break;
			
			case 4:
			
			custoD = 4.15;
			break;
			
						
		}
		
		 printf("\n Favor informar q quantidade desejada: ");
		 scanf("%i", &qtd);
		 custoD = custoD*qtd;
		 
	return custoD;
};
//#########################################################
//BubbleSort

void bubbleSort(int *V, int N)
{
int i, continua, aux, fim=N;
do
{
continua=0;
for(i=0; i<fim-1; i++)
	{
		if(V[i]>V[i+1])
	{
	aux = V[i];
	V[i]=V[i + 1];
	V[i +1 ] = aux;
	continua = i;
     }
}
fim --;
}
while(continua!=0);

};

// ########################################################################
// QuickSort

int particiona(int *V, int inicio, int final ){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(V[esq] <= pivo)
            esq++;
        while(V[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
};

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
};

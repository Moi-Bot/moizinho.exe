#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define N 2
int main ()
{
  setlocale(LC_ALL, "PORTUGUESE");
  
  int  i;  
  float quant[N], preco[N], fat = 0, valor;
  
  for(i=0;i<N;i++)
  {
  	printf("Informe a quantidade do produto: \n");
  	scanf("%f", &quant[i]);
  	preco[i]= rand() % 100; //o rand povoa o vetor preço com valores inferiores a 100
  	/*printf("Informe o preço do produto: \n");
  	scanf("%f", &preco[i]);*/
  	
  	valor = (quant[i] * preco[i]);
  	fat = fat + valor;
  }  
  
  printf("O faturamento é: R$%.2f\n", fat);
  getch();
}

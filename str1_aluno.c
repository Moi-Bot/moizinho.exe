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
  
  char nome[5][20];
  float nota[N];
  int i, j;
  

  
  for(i=0;i<N;i++)
  {
  printf("informe o nome do %i aluno: \n", i+1);
  gets(nome[i]);
  fflush(stdin);//comando para limpar o buffer do teclado
  printf("Informe a nota do %i aluno: \n", i+1);
  scanf("%f", &nota[i]);
  fflush(stdin);
  
  }
  for(i=0;i<N;i++)
  
  {
  	printf("Nome: %s ........... Nota: %.2f\n", nome[i], nota[i]);
  }
   

  system("pause");
  return 0;
}

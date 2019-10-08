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
  
  int alunos, i, n;
  float media, nota_t, nota_s, nota_p;
  
  printf("Informe a quantidade de alunos: \n");
  scanf("%i", &alunos);
  
  for(i=1;i<=alunos;i++)
  {
  
  
  printf("\nInsira a nota do trabalho, do %iº aluno:\n", i);
  scanf("%f", &nota_t);
  printf("Insira a nota do Seminário:\n");
  scanf("%f", &nota_s);
  printf("Insira a nota da prova:\n");
  scanf("%f", &nota_p);
  
  media = (nota_t * 20 + nota_s * 30 + nota_p * 50)/ 100;
  
  
  printf("A média do %dº aluno é : %.2f \n", i, media );
  getch();
  system("cls");
 
  
  }
  getch();
}

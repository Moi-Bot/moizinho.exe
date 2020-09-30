#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main ()
{
  setlocale(LC_ALL, "PORTUGUESE");
  
  int alunos, i, n;
  float media, nota_um, nota_dois, nota_tres, nota_quatro;
  

  printf("\nInsira a nota da primeira prova:\n");
  scanf("%f", &nota_um);
  printf("Insira a nota da segunda prova:\n");
  scanf("%f", &nota_dois);
  printf("Insira a nota da terceira prova:\n");
  scanf("%f", &nota_tres);
  printf("Insira a nota da quarta prova:\n");
  scanf("%f", &nota_quatro);
  
  media = (nota_um + nota_dois + nota_tres + nota_quatro)/ 4;

  if(media >= 6)
  {
    printf("A média do aluno é : %.2f \n", media );
    printf("Aluno APROVADO!!");
  }

  else if ((media >= 5) && (media < 6))
  {
    printf("A média do aluno é : %.2f \n", media );
    printf("Aluno EM FINAL!!");
  }

  else 
  {
    printf("A média do aluno é : %.2f \n", media );
    printf("Aluno REPROVADO!!");
  }
 

}

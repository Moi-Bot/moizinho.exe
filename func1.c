#include <stdio.h>
#include <stdlib.h>
#include "cabec.h"
#include "lock.h"
#include "menu.h"


typedef struct dado_do_funcionario
{
    int id, telefone;
    char nome[120];
}kkk;
struct dado_do_funcionario dado[20];
void mostrar()
{
  int i;
  for(i=0;i<20;i++)
  {
        printf("Id: \t \t %d \n Telefone: \t %d \n Nome: \t \t %s \n \n", dado[i].id, dado[i].telefone,dado[i].nome);
  }
}
void limpar()
{
  int i,j;
  for(i=0;i<20;i++)
  {
      dado[i].id = i;
  }
  for(i=0;i<20;i++)
  {
      for(j=0;j<120;j++)
      {
        dado[i].nome[j] = '\0';
      }
  }
}
int main()
{
  int i, keep, count=0, j, y,l=0,m=0;
  limpar();
  cabecalho();
  lock();
  do{
  printf("Deseja registrar [1]pedidos ou [2]clientes \n");
  scanf("%d", &l);
  
  system("cls");
  
  if(l == 1)
  {
    menuses();
  }
  else
  {
    printf("\n");
    m++;
  }
  }while(m==0);
  do
  {
    printf("Escolha o que fazer ? \n [1]Adicionar \n [2]Deletar \n [3]Mostrar \n [4]Sair \n");
    scanf("%d", &keep);
    
    system("cls");
    
    switch(keep)
    {
      case 1:
        printf("Escolha o cliente que deseja adicionar \n");
        scanf("%d", &i);
        dado[i].id = i;
  	printf("Entre o telefone do cliente \n");
  	scanf("%d", &dado[i].telefone);
  	printf("Entre o nome do cliente \n");
  	scanf("%s", dado[i].nome);
        break;
      case 2:
       printf("Escolha o cliente que deseja deletar \n");
       scanf("%d", &i);
       dado[i].id = i;
       dado[i].telefone = 0;
       for(j=0;j<120;j++)
       {
          dado[i].nome[j] = '\0';
       }
       break;
      case 3:
        mostrar();
        break;
      case 4:
        printf("Saindo.... \n");
        break;
      default:
        printf("Opção errada escolha de 1 a 4 \n");
    }
  }while(keep!=4);
  return 0;
}

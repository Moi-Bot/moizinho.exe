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
  float peso_j = 55.00, peso_g = 51.00;
  int ano; 
  
  while(peso_g < peso_j)
  {
  	peso_g = peso_g + 0.300;
  	peso_j = peso_j + 0.200;
  	ano = ano + 1;
  }
  printf("Gabriela tera o peso maior que o de Joana em %i anos.\n", ano );
  printf("O peso de Gabriela será:\n Kg%.2f\n", peso_g);
  printf("O peso de Joana será:\n Kg%.2f\n", peso_j);
  getch();
}

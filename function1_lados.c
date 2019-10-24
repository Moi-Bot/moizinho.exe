#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

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

int main()
{
	
  	setlocale(LC_ALL, "PORTUGUESE");
	int opcao;
	float lado, lado1, lado2, area=0;
	
	printf("Cálculo de áreas.\n");
	printf("0 - Area de um quadrado.\n");
	printf("1 - Area de um triangulo ret.\n");
	printf("Informe sua opcao:\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 0: 
		{
			printf("Informe o valor do lado : \n");
			scanf("%f", &lado);
			area = area_quadrado(lado);
			break;
		}
		case 1:
		{
			printf("Informe o valor do lado 1: \n");
			scanf("%f", &lado1);
			printf("Informe o valor do lado 2:\n");
			scanf("%f", &lado2);
			area = area_triang_ret(lado1, lado2);
			break;
		}
		default:
		{
			printf("Opcao invalida\n");
			break;
		}
	}
	printf("O cálculo da área é: %f\n", area);
	return 0;

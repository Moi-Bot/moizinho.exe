#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

float carrara (float km, float ban)
{

	if (ban==1)
	{
		float result= 0.0;
		result = (km*2.70) + 5.40;
		return result;
	}
	else if (ban==2)
	{
		float result = 0.0;
		result = (km*3.30) + 5.40;
		return result;
	}
	else
	{
		return printf("Errou agostinho");
	}
}
	
	void main()
	{
		setlocale(LC_ALL, "PORTUGUESE");
		int ban;
		float km, pag;
		
		printf("¨¨¨¨¨¨¨¨¨¨ C A R R A R A  T Á X I ¨¨¨¨¨¨¨¨¨¨\n");
		printf("¨¨¨¨¨¨¨¨¨¨ T Á X I  C A R R A R A ¨¨¨¨¨¨¨¨¨¨\n");
		
printf("		       __..-======-------..__ \n");
printf("              . '    ______    ___________`.\n");
printf("            .' .--. '.-----.`. `.-----.-----`.\n");
printf("           / .'   | ||      `.` \\     \     \\ \n");            
printf("         .' /     | ||        \\ \\_____\_____\\__________[_] \n");
printf("        /   `-----' |'---------`\  .'                       \ \n");
printf("      /============|============\'-------------------.._____| \n");
printf("   .-`---.         |-==.        |'.__________________  =====|-._\n");
 printf(" .'        `.      |            |      .--------.    _` ====|  _ .\n");
printf(" /     __     \     |            |   .'           `. [_] `.==| [_] \ \n");
printf("[   .`    `.  |     |            | .'     .---.     \      \=|     | \n");
printf("|  | / .-. '  |_____\___________/_/     .'---. `.    |     | |     | \n");
printf("`-'| | O |'..`------------------'.....'/ .-. \ |    |       ___.--' \n");
printf("LGB  \ `-' / /   `._.'                 | | O | |'___...----''___.--' \n");
printf("      `._.'.'                           \ `-' / [___...----''_.' \n");
printf("                                         `._.'.'\n");
		

		
		printf("Informe a bandeira: \n");
		scanf("%i", &ban);
		printf("Kilômetros rodados: \n");
		scanf("%f", &km);
		
		pag = carrara(km, ban);
		
		printf("Total à pagar: %.2f\n", pag);
	}

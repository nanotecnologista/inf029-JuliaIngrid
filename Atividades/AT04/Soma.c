#include <stdio.h>

int soma (int valor1, int valor2){

    int resultado= valor1 + valor2;
    
    return resultado;
}
int main (){

printf("                           _                \n");
printf("                         / /                \n");
printf("               __   __  '-'__  ___     ___  \n");
printf("              |  | |  |   |  ||   |   |   | \n");
printf("              |  | |  |   |  ||   |___|   | \n");
printf("         __   |  | |  |   |  ||   '___'   | \n");
printf("        |  |__|  | |   ---   ||   |   |   | \n");
printf("         \\__ __ _|  \\_______/ '___'   '___' \n");


    int num1, num2, resultado;
    printf ("\nInsira dois valores\n");
    scanf("%d %d", &num1, &num2);
    resultado = soma(num1, num2);
    printf ("o resultado e: %d\n", resultado);


    return 0;
}
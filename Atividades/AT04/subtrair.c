#include <stdio.h>

int subtracao (int valor1, int valor2, int valor3){

    int resultado= valor1 - valor2 - valor3;
    
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


    int num1, num2, num3, resultado;
    printf ("\nInsira três valores\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    resultado = subtracao(num1, num2, num3);
    printf ("o resultado e: %d\n", resultado);


    return 0;
}
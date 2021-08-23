#include <stdio.h>

 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */


int fatorial (int numero){
    int fat, error=-1;

    if (numero > 12){
        printf ("Não é possivel calcular o fatorial\n");
        return error;
    }
    
    for(fat = 1; numero > 1; numero = numero - 1); //
    fat = fat * numero;

    return fat;
}

int main ( ){
    int fator, resultado, cond=1;

    while(cond ==1){

    printf("Insira o número que será fatorado\n");
    scanf ("%d", &fator);
    resultado = fatorial(fator);
    
    if (resultado == -1){
        return 0;

    } else if (resultado == 0 || resultado == 1 ){

        printf("O resultado é: 1\n");
        return 0;
    }

    printf("O resultado é: %d\n", resultado);

    }
return 0;

}

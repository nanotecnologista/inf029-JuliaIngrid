#include <stdio.h>
#include "chamandoTeste.h"

 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */



//Elevando ao quadrado

int main (){
    int n, resultado;
    printf("Insira um valor");
    scanf("%d", &n);
    resultado = chamandoTeste(n);
    printf("o resultado é: %d \n", resultado);
    
    return 0;
}
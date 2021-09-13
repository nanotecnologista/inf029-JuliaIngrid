#include <stdio.h>
#define VET 30

 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

struct Palavras{
    char vet1[VET];
    char vet2[VET];
    char vet3[VET];
};


struct Palavras ler3Palavras(){
    struct Palavras palavras;
    
    puts("Insira a 1 palavra:");
    scanf (" %29[^\n]", palavras.vet1);

    puts("Insira a 2 palavra:");
    scanf (" %29[^\n]", palavras.vet2);

    puts("Insira a 3 palavra:");
    scanf (" %29[^\n]", palavras.vet3);

    return palavras;
}


int main( ){
    struct Palavras resultado;

    puts("Insira 3 palavras:");
    resultado = ler3Palavras();
    
    printf("A primeira palavra e: %s\n", resultado.vet1);
    printf("A primeira palavra e: %s\n", resultado.vet2);
    printf("A primeira palavra e: %s\n", resultado.vet3);

    return 0;    
}
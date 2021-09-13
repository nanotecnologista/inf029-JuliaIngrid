#include <stdio.h>
#define VET 3

 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */


char *ler3Letras(){
    static char vet[VET];
    int i=0;

    for ( i = 0; i < VET; i++){
        printf("Insira a %d letra:\n", (i+1));
        // fflush(stdin);
        scanf(" %c", &vet[i]);
    }

    return vet;
}


int main( ){
    char *ponteiroVetor;

    printf("Insira 3 valores: \n");
    ponteiroVetor = ler3Letras();

    for (int i = 0; i < VET; i++){
        printf("O %d valor e: %c \n", i, ponteiroVetor[i]);
    }
    
    return 0;    
}
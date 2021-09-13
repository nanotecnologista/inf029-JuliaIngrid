#include <stdio.h>

// Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
// usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
// para fazer o retorno.

int *ler3numeros(){
    static int vet[3];
    int i=0;

    for ( i = 0; i < 3; i++){
        printf("Insira o %d valor:\n", i);
        scanf("%d", &vet[i]);
    }

    return vet;
}


int main( ){
    int *ponteiroVetor;

    printf("Insira 3 valores: \n");
    ponteiroVetor = ler3numeros();

    for (int i = 0; i < 3; i++){
        printf("O %d valor e %d \n", i, ponteiroVetor[i]);
    }
    
    return 0;    
}
#include <stdio.h>
#define MAX 10

int main (){
    int resultado;

    for (int i = 1; i <= MAX ; i++){
        printf("Tabuada do %d\n", i);
        for (int j = 1; j <= MAX; j++){
            resultado = i*j;
            printf("%d x %d = %d \n", i, j, resultado);
        }
        printf("\n");
        resultado=0;
    }
    
}
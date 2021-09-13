#include <stdio.h>


 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */


struct Numeros {
    int num1, num2, num3, num4;
};

int x;

struct Numeros ler4numeros(){
    struct Numeros numeros;

    printf ("Insira o num 1: \n");
    scanf ("%d", &numeros.num1);
    
    printf ("Insira o num 2: \n");
    scanf ("%d", &numeros.num2);
    
    printf ("Insira o num 3: \n");
    scanf ("%d", &numeros.num3);
    
    printf ("Insira o num 4: \n");
    scanf ("%d", &numeros.num4);

    return numeros;
}

int main( ){
    struct Numeros resultado;

    printf("Insira 4 numeros: \n");
    resultado = ler4numeros();
    
    // for (int i = 0; i <= 4; i++){
    //     printf ("o num %d que vc digitou foi: %d", i, resultado.i);
    // }

    printf ("O num 1 e: %d\n", resultado.num1);
    printf ("O num 2 e: %d\n", resultado.num2);
    printf ("O num 3 e: %d\n", resultado.num3);
    printf ("O num 4 e: %d\n", resultado.num4);



    return 0;
    
}
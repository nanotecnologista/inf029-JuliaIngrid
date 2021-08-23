#include <stdio.h>
#include <math.h>

 /*                        _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */


int main (){
    int  escolha=0, continua=1, contadora=0;
    float valor=0, resultado=0;

    printf("\tCalculadora teste\n");

    while (continua==1){

        printf("\t  MENU:\n[0]Sair       [1]Somar\n[2]Subtrair   [3]Multiplicar\n[4]Dividir\n");
        scanf("%d", &escolha);

        if (escolha!=0 && contadora==0){
            printf("Insira o primeiro valor:\n");
            scanf("%f", &resultado);
        }
            
        switch (escolha){
            case 1: //Soma
                printf("Somando\n");
                scanf("%f", &valor);
                resultado+=valor;
                printf("o Resultado é: %.2f\n", resultado);

            break;
            case 2: //Subtração
                printf("Subtraindo\n");
                scanf("%f", &valor);
                resultado-=valor;
                printf("o Resultado é: %.2f\n", resultado);

            break;
            case 3: //Multiplicar
                printf("Multiplicando\n");
                scanf("%f", &valor);
                resultado*=valor;
                printf("o Resultado é: %.2f\n", resultado);

            break;
            case 4: //Dividir
                printf("Dividindo\n");
                scanf("%f", &valor);

                while (valor == 0){
                printf ("Não é possivel dividir por 0!\nDigite outro segundo valor:");
                scanf ("%f", &valor);
                }

                resultado/=valor;
                printf("o Resultado é: %.2f\n", resultado);

            break;
            default: //Qualquer outro : cancela 
                printf("Xau!!\n");
                printf("o Resultado final é: %.2f\n", resultado);
                continua=0;

            break;
        }
        contadora++;
    }
    
    
}
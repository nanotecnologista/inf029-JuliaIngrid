#include <stdio.h>
#include "escolhaSubMenu.h"

// menu inicial

int main (){
    int escolha, escolhaSubMenu;
    int menuAtivo= 0;

    do { // loop para o menu ficar ativo sempre

        printf ("\tSistema da escola:");
        printf ("[1] Aluno \n [2] Professor \n [3] Disciplina \n [4] Relatórios \n [0] Sair\n ");
        scanf("%d", &escolha);

        switch (escolha){
        
        case 1: // Caso escolha Aluno
            //chamando função de aluno
            SubMenu(escolha);
        break;
        
        case 2: //Caso escolha Professor
            // Professor()
        break;
        
        case 3: // Caso escolha Disciplina
            //chamando função 
            //Disciplina();
        break;
        
        case 4: // Caso escolha Relatórios
            //chamando  função
            // Relatorios();
        break;
        
        case 0:
            return 0;
        break;
        
        default:
            printf ("Valor inserido inválido. Favor escolher uma das opções\n");
        break;
        }

    }while (!menuAtivo);

    return 0;
}

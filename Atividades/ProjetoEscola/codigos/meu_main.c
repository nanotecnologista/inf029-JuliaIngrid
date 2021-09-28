#include <stdio.h>
#include "escolhaSubMenu.h"

// menu inicial

int main (){
    int escolha, escolhaSubMenu;
    int menuAtivo= 0;

    do { // loop para o menu ficar ativo sempre

        printf ("\tSistema da escola:");
        
        printf ("[1] Atualizar \n [2] Excluir \n [3] cadastrar \n [4] Relatorios \n [0]Fechar \n");
        
        scanf("%d", &escolha);

        switch (escolha){
        
        case 1: // Caso escolha Atualizar
            //chamando função
            atualizar( );
        break;
        
        case 2: //Caso escolha Excluir
            excluir( );
        break;
        
        case 3: // Caso escolha Disciplina
            //chamando função 
            cadastrar( );
        break;
        
        case 4: // Caso escolha Relatórios
            //chamando  função
            relatorios( );
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

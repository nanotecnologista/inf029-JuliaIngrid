#include <stdio.h>
#define VET 31
#define MAX_CPF 11
// ) Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
// cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
// imprimir os dados do cliente.


 /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */


struct Clientes {
    char nome[VET];
    char genero;
    char cpf[MAX_CPF];
    int dia, mes, ano;

};


struct Clientes lerDadosCliente(){
    struct Clientes cadastro;

    // fflush(stdin);
    printf ("Insira o seu nome: \n");
    scanf ("%s", &cadastro.nome);
    fflush(stdin);
    
    printf ("Sexo: [M] Masculino / [F] Feminino \n");
    scanf ("%c", &cadastro.genero);
    fflush(stdin);

    printf ("Informações sobre o nascimento: \n");
    printf ("Insira o dia de nascimento: \n");
    fflush(stdin);

    scanf ("%d", &cadastro.dia);
    fflush(stdin);

    printf ("Insira o mes de nascimento: \n");
    scanf ("%d", &cadastro.mes);
    fflush(stdin);

    printf ("Insira o ano de nascimento: \n");
    scanf ("%d", &cadastro.ano);
    fflush(stdin);
    
    printf ("Insira o seu CPF: \n");
    scanf (" %11[^/n]", &cadastro.cpf);
    fflush(stdin);

    return cadastro;
}

int main( ){
    struct Clientes cliente;

    printf("Iniciando seu cadastro: \n");
    cliente = lerDadosCliente();
    
    printf ("O seu nome é: %s\n", cliente.nome);
    printf ("O seu sexo é: %c\n", cliente.genero);
    printf ("A sua data de nascimento é: %d/%d/%d\n", cliente.dia, cliente.mes, cliente.ano);
    printf ("O seu CPF é: %s\n", cliente.cpf);

    return 0;
    
}
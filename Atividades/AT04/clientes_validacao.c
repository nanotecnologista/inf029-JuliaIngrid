#include <stdio.h>
#include <string.h>
#include <time.h>
#define VET 30
#define MAX_CPF 11
// Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cada
// validação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarCliente
// deve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizado
// com sucesso ou se houve erro, informando onde foi o erro:
// •função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
// •função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
// masculino; f e F para feminino, o e O para outro).
// •
// •
// função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
// função validarNacimento: recebe o data digitada, e valida é uma data válida.


 /*                        _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

struct tm tempo; 

struct Clientes {
    char nome[VET];
    char genero;
    char cpf[MAX_CPF];
    int dia, mes, ano;

};

//Escopo das funções
struct Clientes lerDadosCliente();
int validarNome (int *validNome); 
char validarSexo (char validSexo);
char validarCPF (char validCPF[]);
int validarNascimento (int validDia, int validMes, int validAno);

int main( ){
    struct Clientes cliente;

    printf("Iniciando seu cadastro: \n");
    cliente = lerDadosCliente(); // chamando função para ler os dados
    
    //Print dos dados finais. 
    printf ("O seu nome é: %s\n", cliente.nome); 
    printf ("O seu sexo é: %c\n", cliente.genero);
    printf ("A sua data de nascimento é: %d/%d/%d\n", cliente.dia, cliente.mes, cliente.ano);
    printf ("O seu CPF é: %s\n", cliente.cpf);

    return 0;
    
}

struct Clientes lerDadosCliente(){
    struct Clientes cadastro;
    int error = 0;    // V de verdadeiro

    //PS: estou alternando a lógica da var Error, pra não ter que ficar zerando ela toda hora.

    fflush(stdin);

    do{
        printf ("Insira o seu nome: \n");
        scanf ("%s", &cadastro.nome);
        fflush(stdin);
        error = validarNome (cadastro.nome);
    }while(error == 0);// Aqui a variavel está zerada e tida como verdadeira.
    
    do{
        printf ("Sexo: [M] Masculino / [F] Feminino \n");
        scanf ("%s", &cadastro.genero);
        fflush(stdin);
        error = validarSexo (cadastro.genero);
    }while (error == 1); // aqui é pq eu to preguiça de zerar a variavel. Então o 1 vai valer como verdadeiro.

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

int validarNome (int *validNome){
    int tamanho = strlen(validNome);

    if(tamanho > 20){
        printf ("O nome inserido tem mais de 20 letras, favor inserir um menor \n");
        return 0;
    }else{
        return 1;
    }
}

char validarSexo (char validSexo){
    if (validSexo == 'F' || validSexo == 'f' || validSexo == 'M' || validSexo == 'm'){
        
        return 0;

    }else{
        printf ("valor inserido errado. Favor, insira novamente\n");
        return 1;
    }

}

int validarNascimento (int validDia, int validMes, int validAno){
    if(validAno >= 1900 && validAno <= time.a);
}
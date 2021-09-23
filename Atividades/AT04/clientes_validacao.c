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


struct Clientes {
    char nome[VET];
    char genero;
    char cpf[MAX_CPF];
    int dia, mes, ano;

};

//Escopo das funções
struct Clientes lerDadosCliente();
int validarNome (int *validNome); 
int validarSexo (char validSexo);
int validarNascimento (int validDia, int validMes, int validAno);
int validarCPF (char validCPF[]);

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
    int error = 0;    // F de falso

    //PS: estou alternando a lógica da var Error, pra não ter que ficar zerando ela toda hora.

    fflush(stdin);

    do{
        printf ("Insira o seu nome: \n");
        scanf ("%s", &cadastro.nome);
        fflush(stdin);
        error = validarNome (cadastro.nome);
    }while(error == 0);// Aqui a variavel está zerada e tida como falsa.
    
    do{
        printf ("Sexo: [M] Masculino / [F] Feminino \n");
        scanf ("%s", &cadastro.genero);
        fflush(stdin);
        error = validarSexo (cadastro.genero);
    }while (error == 1); // aqui é pq eu to preguiça de zerar a variavel. Então o 1 vai valer como falsa.

    do{
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

        error = validarNascimento (cadastro.dia, cadastro.mes, cadastro.ano);

    }while(error == 0); // zerada e falsa

    do{
        printf ("Insira o seu CPF: \n");
        scanf (" %11[^/n]", &cadastro.cpf);
        fflush(stdin);
        error =  validarCPF(cadastro.cpf);
    }while(error == 1); // 1 é falso

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

int validarSexo (char validSexo){
    if (validSexo == 'F' || validSexo == 'f' || validSexo == 'M' || validSexo == 'm'){
        
        return 0;

    }else{
        printf ("valor inserido errado. Favor, insira novamente\n");
        return 1;
    }

}

int validarNascimento (int validDia, int validMes, int validAno){

    
    struct tm *tempo; // criando struct do tempo
    time_t segundos; //armazenar o tempo em segundos  
    time(&segundos); //obtendo o tempo em segundos  
    tempo = localtime(&segundos); //convert seg para o temp local usa localtime

    if(validAno >= 1900 && validAno <= tempo->tm_year+1900){ // verificando o ano atual

        if(validMes > 0 && validMes <= 12){ //verificando se o mês é válido

            if (validDia > 0 && validDia <= 31){ // verificando se o dia é válido

                if (validDia > 29 && validMes == 2){ // verificando se a data bate com a quant. dia do mes.

                    printf ("fevereiro só tem 28/29 dias. Você inseriu dia de nascimento maior que isso\n");
                    return 0; // pedindo pra inserir novamente

                }else if (validMes == 4 || validMes == 6 || validMes == 9 || validMes == 11 && validDia > 30){
                    // verficando se a data bate com a quant. de dias dos meses com 30 dias.

                    printf ("O mês inserido só tem 30 dias. Favor inserir novamente:\n");
                    return 0; //pedindo para inserir novamente

                    // como já verifiquei no primeiro if se a quantidade de dias era até 31
                    // não há nessecidade de eu verificar se ele pertence aos meses restantes
                    // já que eu verifiquei a quantidade de meses tbm. 

                }else{
                    //após verificar que está tudo correto, verificar como verdadeiro.
                    return 1; // return verdadeiro.
                } 
               
            }else{
                printf("A quantidade de dias está errada.\n");
                return 0; // pedindo para inserir novamente
            }

        }else{
            printf ("Mes inserido errado. \n");
            return 0; // inserir novamente
        }
        

    } else{
        printf ("Ano inserido errado.\n");
        return 0; // inserir novamente
    } 
    
}

int validarCPF (char validCPF[]){
        /* Validando o tamanho do cpf */
    int tamanho = strlen(validCPF);

    if (tamanho != 11){
        printf("O Cpf digitado não tem 11 caracteres\nPor favor, digite um CPF válido");
        return 1; //return falso

    }else{

        char numeros[10] = "0123456789";
        char num_atual, num_cpf;
        int cont = 0;

        /* Vendo se existem somente números no cpf*/
        for (int index1 = 0; index1 <= 10; index1++){
            /* varrendo dentro do cpf" */
            cont = 0;
            num_cpf = validCPF[index1];

            for (int index2 = 0; index2 <= 9; index2++){
                num_atual = numeros[index2];

                if (num_atual == num_cpf){

                    cont++;
                }
            }
            if (cont != 1){
                printf("[%c] não é um número válido ", num_cpf);
                return 1; //falso
            }
        }
    }

    return 0; //verdadeiro
}

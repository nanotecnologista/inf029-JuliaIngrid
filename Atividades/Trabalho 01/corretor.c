#include "Julia-2020110016.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testQ1();
void testQ2();
void testQ3();
void testQ4();
void testQ5();
void testQ6();

int main()
{        
    testQ1();
    testQ2();
    testQ3();
    testQ4();
    testQ5();
    testQ6();
}

void testQ1()
{
    char str[11];
    strcpy(str, "29/02/2015");
    printf("%d\n", quest1(str) == 0);
    strcpy(str, "29/02/2012");
    printf("%d\n", quest1(str) == 1);
    strcpy(str, "9/13/2014");
    printf("%d\n", quest1(str) == 0);
    strcpy(str, "45/4/2014");
    printf("%d\n", quest1(str) == 0);
    strcpy(str, "/9/2014");
    printf("%d\n", quest1(str) == 0);
}

void testQ2()
{
    char datainicial[11], datafinal[11];
    int qtdDias, qtdMeses, qtdAnos;
    int retorno;

    //teste 1
    qtdDias = -1;
    qtdMeses = -1;
    qtdAnos = -1;

    strcpy(datainicial, "06/06/2017");
    strcpy(datafinal, "05/07/2018");
    retorno = quest2(datainicial, datafinal, &qtdDias, &qtdMeses, &qtdAnos);
    printf("%d\n", retorno == 1);
    printf("%d\n", qtdDias == 0);
    printf("%d\n", qtdMeses == 1);
    printf("%d\n", qtdAnos == 1);

    //teste 2 - retornos
    qtdDias = -1;
    qtdMeses = -1;
    qtdAnos = -1;

    strcpy(datainicial, "01/30/2015");
    strcpy(datafinal, "01/06/2016");
    retorno = quest2(datainicial, datafinal, &qtdDias, &qtdMeses, &qtdAnos);
    printf("%d\n", retorno == 2);

    strcpy(datainicial, "01/3/2015");
    strcpy(datafinal, "40/06/2016");
    retorno = quest2(datainicial, datafinal, &qtdDias, &qtdMeses, &qtdAnos);
    printf("%d\n", retorno == 3);

    strcpy(datainicial, "01/06/2016");
    strcpy(datafinal, "01/06/2015");
    retorno = quest2(datainicial, datafinal, &qtdDias, &qtdMeses, &qtdAnos);
    printf("%d\n", retorno == 4);

    //teste 3
    qtdDias = -1;
    qtdMeses = -1;
    qtdAnos = -1;

    strcpy(datainicial, "06/06/2017");
    strcpy(datafinal, "07/07/2017");
    retorno = quest2(datainicial, datafinal, &qtdDias, &qtdMeses, &qtdAnos);
    printf("%d\n", retorno == 1);
    printf("%d\n", qtdDias == 1);
    printf("%d\n", qtdMeses == 1);
    printf("%d\n", qtdAnos == 0);  
}

void testQ3()
{
    char str[250];
    strcpy(str, "Renato Lima Novais");
    printf("%d\n", quest3(str, 'a', 0) == 3);
    printf("%d\n", quest3(str, 'b', 0) == 0);
    printf("%d\n", quest3(str, 'l', 1) == 0);
    printf("%d\n", quest3(str, 'l', 0) == 1);
    printf("%d\n", quest3(str, 'L', 0) == 1);
}

void testQ4(){
    char strTexto[250];
    char strBusca[50];
    int posicoes[30];
    int i;
    for (i = 0; i < 30; i++)
    {
        posicoes[i] = -1;
    }
    strcpy(strTexto, "Laboratorio de programacao: para ratos de programação");
    strcpy(strBusca, "rato");
    printf("%d\n", quest4(strTexto, strBusca, posicoes) == 2);    
    printf("%d\n", posicoes[0] == 4);
    printf("%d\n", posicoes[1] == 8);
    printf("%d\n", posicoes[2] == 33);
    printf("%d\n", posicoes[3] == 37);

    for (i = 0; i < 30; i++)
    {
        posicoes[i] = -1;
    }
    printf("\n\n");
    strcpy(strTexto, "Olá, o mundo é muito grande. Tem muitas pessoas, e muitos problemas");
    strcpy(strBusca, "mui");
    printf("%d\n", quest4(strTexto, strBusca, posicoes) == 3);
    printf("%d\n", posicoes[0] == 17);
    printf("%d\n", posicoes[1] == 20);
    printf("%d\n", posicoes[2] == 35);
    printf("%d\n", posicoes[3] == 38);
    printf("%d\n", posicoes[4] == 53);
    printf("%d\n", posicoes[5] == 56);
}

void testQ5()
{
    printf("%d\n", quest5(345) == 543);
    printf("%d\n", quest5(78) == 87);
    printf("%d\n", quest5(3) == 3);
    printf("%d\n", quest5(5430) == 345);
}

void testQ6()
{
    printf("%d\n", quest6(34567368, 3) == 2);
    printf("%d\n", quest6(34567368, 4576) == 0);
    printf("%d\n", quest6(3539343, 3) == 4);
    printf("%d\n", quest6(3539343, 39) == 1);
}
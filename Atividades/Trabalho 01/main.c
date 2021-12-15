#include "Julia-2020110016.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Quebrando a string data */
Data quebraData(char *data){
    char sDia[3];
    char sMes[3];
    char sAno[5];
    Data auxiliar;  
    auxiliar.valido = 1;
    int i;

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // verificando se tem 1 ou dois digitos
		sDia[i] = '\0';  // colocando \0 no final
	}else 
		auxiliar.valido = 0;
	int j = i + 1; //andando de casa em casa pra pular a barra
	i = 0;
	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}
    // testa se tem 1 ou dois digitos
	if(i == 1 || i == 2){ 
        // coloca o barra zero no final
		sMes[i] = '\0';  
	}else
		auxiliar.valido = 0;
	
	j = j + 1; //andando de casa em casa pra pular a barra
	i = 0;
    int k;
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testando se tem 2 ou 4 digitos
		sAno[i] = '\0';  
	}else
		auxiliar.valido = 0;	
  int iDia;
  int iMes;
  int iAno;
  //transformando strings em inteiros//
  iDia = atoi(sDia);
  iMes = atoi(sMes);
  iAno = atoi(sAno);
  auxiliar.sDia = iDia;
  auxiliar.sMes = iMes;
  auxiliar.sAno = iAno;
  return auxiliar;
}

/* Verficando se o ano é bissexto */
int bissexto(int ano){
  if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    return 1;
  else 
    return 0;  
}

/* Validandp a data */
int validarData(Data dq){
  if(dq.valido == 0){
   return 0;
  }
   /* Validando o Mês */
    if(dq.sMes >= 1 && dq.sMes <= 12){
        // Pra mês com 31 dias
        if(dq.sMes == 1 || dq.sMes == 3 || dq.sMes == 5 || dq.sMes == 7 ||
            dq.sMes == 8 || dq.sMes == 10 || dq.sMes == 12){
              if(dq.sDia > 31)
                return 0;
            }
        // Pra mês com 30 dias
        if(dq.sMes == 4 || dq.sMes == 6 || dq.sMes == 9 || dq.sMes == 11){
              if(dq.sDia > 30)
                return 0;  
        }
        //Pra fevereiro
        if(dq.sMes == 2){
            //Pra ano bissexto
            if(bissexto(dq.sAno)){
              if(dq.sDia > 29)
                return 0;
            }
            else{
              if(dq.sDia > 28)
                return 0;
            } 
        }
    }
    else 
      return 0; 
  return 1;
}

/* Verificando a data */
int _maior(int iDia, int iMes, int iAno, int fDia, int fMes, int fAno){
    if (iAno > fAno)
        return 4;
    else if(iAno == fAno){
        if (iMes > fMes)
            return 4;
        else if (iMes == fMes){
            if (iDia > fDia)
                return 4;
        } 
    }  
  return 20;
}

/*TRABALHO 01*/
//QUESTÃO 1
int qest1(char *data){
   Data retorno;
   int r;
   retorno = quebraData(data); 
  if(retorno.valido == 0)
    return 0;
   r = validarData(retorno);
   return r; 
}

//QUESTÃO 2
int qest2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos){
    Data inicio;
    Data fim;
    int i, f;
    int maior;

    inicio = quebraData(datainicial);
    fim = quebraData(datafinal);
    if(inicio.valido == 0)  
    return 2;
    if(fim.valido == 0)
    return 3; 
    // 'i' e 'f' recebem se a data é valida ou não//
    i = validarData(inicio);
    f = validarData(fim); 
    if(i == 0) 
    return 2;
    if(f == 0)
    return 3;  
    //Pegando var inteiras
    int iDia, iMes, iAno;
    int fDia, fMes, fAno;
    iDia = inicio.sDia;
    iMes = inicio.sMes;
    iAno = inicio.sAno;
    fDia = fim.sDia;
    fMes = fim.sMes;
    fAno = fim.sAno;
    //vendo se a data está certa
    maior = _maior(iDia, iMes, iAno, fDia, fMes, fAno);
    if(maior == 4)
    return 4;
    //Var auxiliares
    int  nDias;
    int  nMeses;
    int  nAnos;
    //Calculos
    nDias = fDia - iDia;
    nMeses = fMes - iMes;
    nAnos = fAno - iAno;
    /*salvandos os parâmetros da funcao */
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;
    return 1;     
    }

//QUESTÃO 3
int quest3(char *texto, char c, int e_maiuscula){
  int repetidas = 0;
    for(int i = 0; i < (strlen(texto)); i++){
        if(e_maiuscula == 1){
            if(c == texto[i])             
             repetidas++;
        }
        else if(e_maiuscula == 0){
          int auxiliar = 0;
            //Se for maiusculo, muda pra minusculo       
            if(c >= 'A' && c <= 'Z')
             c = c + 32; 
            while(texto[auxiliar] != '\0'){
               if(texto[auxiliar]>= 'A' && texto[auxiliar] <= 'Z')
                  texto[auxiliar] = texto[auxiliar] + 32;
              auxiliar++;
            } 
            if(c == texto[i])             
             repetidas++;
        }
    }
  return repetidas;
}

//QUESTÃO 4
    int quest4(char *strTexto, char *strBusca, int posicoes[30]){
    int repetidas = 0;
    int auxiliar, ok = 0;
    int cont = 0;
    int cont2 = 1;
    //Busca dentro do texto
    int vet_auxiliar[strlen(strTexto)];
    for(int i = 0; i <= strlen(strTexto) - strlen(strBusca); i++){
        if(strTexto[i] == strBusca[0]){
            for(int k = 0; k < strlen(strBusca); k++)
                vet_auxiliar[k] = 0;
                auxiliar = i;
                for(int j = 0; j < strlen(strBusca); j++){
                    if(strBusca[j] == strTexto[auxiliar] ){
                        vet_auxiliar[j] = 1;
                        auxiliar++;
                    }
            }
            ok = 1;
            for(int m = 0; m < strlen(strBusca); m++){
                if(vet_auxiliar[m] == 0)
                ok = -1;
            }            
            if(ok == 1){
                repetidas++;
                posicoes[cont] = i;
                posicoes[cont2]= auxiliar;
                cont = cont + 2;
                cont2 = cont2 + 2;
            }
        }
    }
    return repetidas;
}

//QUESTÃO 5
int quest5(int num){
    int inverso = 0, aux;
    do{
        aux = num % 10;
        inverso = inverso * 10 + aux;
        num /= 10;
    }while(num > 0);
    return inverso;  
    }

//QUESTÃO 6//
int quest6(int numerobase, int numerobusca){
    int repetidas = 0;
    int auxiliar, ok = 0;
    int base[20];
    int busca[20];
    int TamBASE = 0; 
    int TamBUSCA = 0;
    
    do{
        base[TamBASE] = numerobase % 10;
        numerobase /= 10;
        TamBASE++;
    }while(numerobase > 0);
    do{
        busca[TamBUSCA] = numerobusca % 10;
        numerobusca /= 10;
        TamBUSCA++;
    }while(numerobusca > 0);
    int vet_auxiliar[TamBASE];
    for(int i = 0; i <= TamBASE - TamBUSCA; i++){
        if(base[i] == busca[0]){
            for(int k = 0; k < TamBUSCA; k++){
                vet_auxiliar[k] = 0;
                auxiliar = i;
                for(int j = 0; j < TamBUSCA; j++){
                    if(busca[j] == base[auxiliar] ){
                        vet_auxiliar[j] = 1;
                        auxiliar++;
                    }
                }
            ok = 1;
            for(int m = 0; m < TamBUSCA; m++){
                if(vet_auxiliar[m] == 0)
                    ok = -1;
            }
            if(ok == 1){
            repetidas++;       
        }
    }
    return repetidas;
}
typedef struct{
  int sDia;
	int sMes;
	int sAno;
  int valido;
}Data;

//1ª E 2ª quest
int bissexto(int ano);
int validarData(Data dq);
Data quebraData(char *data);

//1ª quest
int quest1(char *data);
void teste_q1();

//2ª quest
int quest2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos);
void testQ2();
int ehmaior(int iDia, int iMes, int iAno, int fDia, int fMes, int fAno);

//3ª quest
int quest3(char *texto, char c, int isCaseSensitive);
void testQ3();

//4ª quest
int quest4(char *strTexto, char *strBusca, int posicoes[30]);
void testQ4();

//5ª quest
int quest5(int num);
void testQ5();

//6ª quest
int quest6(int numerobase, int numerobusca);
void testQ6();
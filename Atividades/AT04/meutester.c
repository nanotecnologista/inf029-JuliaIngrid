#include <stdio.h>
#include <time.h> //necessário para usar localtime() e struct tm
int main(void)
{
  //ponteiro para struct que armazena data e hora  
  struct tm *tempo;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  tempo = localtime(&segundos);  
  

  printf("\nAno..........: %d\n\n", tempo->tm_year+1900);  
  
 
  printf("%d\n\n",tempo->tm_year+1900); //ano
  
  return 0;
}
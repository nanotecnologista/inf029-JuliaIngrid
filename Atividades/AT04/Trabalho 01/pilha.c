#include  <stdio.h> 
#include  <string.h>

int  main ()
{
   char str [ 50 ];

   strcpy (str, " Esta é a função de biblioteca string.h " );
   puts (str);

   memset (str, ' é ' , 3 );
   puts (str);
   
   return ( 0 );

    estacionamento_listar_veiculos( &e ); //listando os veículos
    estacionamento_manobrar_veiculo( &e, manobEntrada, 1010 );
    estacionamento_manobrar_veiculo( &e, manobEntrada, 2020 );
    estacionamento_manobrar_veiculo( &e, manobEntrada, 3030 );
    estacionamento_manobrar_veiculo( &e, manobEntrada, 4040 );
    estacionamento_manobrar_veiculo( &e, manobEntrada, 5050 );

    estacionamento_listar_veiculos( &e );

    qtd = estacionamento_manobrar_veiculo( &e, manobSaida, 3030 );

    printf( "Retirei veiculo do estacionamento com %d manobras!\n", qtd );

    estacionamento_listar_veiculos( &e );

}
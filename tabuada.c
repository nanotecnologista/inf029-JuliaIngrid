#include <stdio.h>
#define MAX 10

int main (){
    int iCont=1, jCont=1;

    while (iCont <= MAX){
        printf("Tabuada do %d\n", iCont);
        while (jCont <= MAX){
            printf("%d x %d = %d \n", iCont, jCont, (iCont *  jCont));
            jCont++;
        }
        printf("\n");
        jCont=0;
        iCont++;
    }
    
}
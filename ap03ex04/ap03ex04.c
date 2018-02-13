#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor,n,l,i,j;
    printf("Insira o numero desejado");
    scanf("%d",&valor);
    i = 0;
    l=1;
    j=0;
    do

    {
       i = i+1;
       printf("%d",i);
        if(i==l){
            j = j+1;
            l = i+j;
        printf("\n");
       }}
       while (j!= valor + 1);


return(0);

}


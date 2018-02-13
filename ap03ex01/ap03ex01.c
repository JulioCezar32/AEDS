#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c ,r1 , r2;


    printf("Insira o primeiro numero\n");
    scanf("%d",&a);
    printf("Insira o primeiro numero\n");
    scanf("%d",&b);
    printf("Insira o primeiro numero\n");
    scanf("%d",&c);
    do {
        r1 = c % b;
        c = b;
        b = r1;}
        while (r1!=0);

    if( c >= a)
        {
            do {
            r2 = c%a;
            c = a;
            a = r2;}
            while(r2!=0);

        }
    else
        do{
        r2 = a%c;
        a=c;
        c=r2;}
        while(r2!=0);

        printf("O MDC entre os tres numeros e : %d \n",a);
return(0);
}

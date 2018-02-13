#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ano,i;
    float verificador1, verificador2, verificador3;
    for (i=0;1<100;i++) {
        printf("Digite o ano que se deseja verificar\n");
        scanf("%d",&ano);
        verificador1 = ano%100;
        verificador2 = ano%4;
        verificador3 = ano %400;

    if(verificador1!=0  && 0 == verificador2){

        printf("O ano %d e bissexto\n", ano);
    }
    else if (verificador3 ==0 ){
        printf("O ano %d e bissexto\n", ano);
    }
    else {
        printf("O ano %d nao e bissexto \n", ano);
    }
    }
return(0);
}

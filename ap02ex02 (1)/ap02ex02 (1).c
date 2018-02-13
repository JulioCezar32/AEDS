#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, IMC ;

    printf("Insira seu peso em Kg \n");
    scanf("%f",&peso);
    printf("Agora, Insira sua altura \n");
    scanf("%f",&altura);

    IMC = peso /(altura * altura) ;
        if (IMC<17){
            printf("Seu IMC calculado e : %lf, voce esta MUITO ABAIXO DO PESO \n",IMC);
        }
         else if (IMC<18.49){
            printf("Seu IMC calculado e : %lf, voce esta ABAIXO DO PESO \n",IMC);
        }
         else if (IMC<24.99){
            printf("Seu IMC calculado e : %lf, voce esta no PESO NORMAL\n",IMC);
        }
         else if (IMC<29.99){
            printf("Seu IMC calculado e : %lf, voce esta ACIMA DO PESO\n",IMC);
        }
         else if (IMC<34.99){
            printf("Seu IMC calculado e : %lf, voce esta OBESIDADE 1\n",IMC);
        }
        else if (IMC<39.99){
            printf("Seu IMC calculado e : %lf, voce esta OBESIDADE 2(Severa)\n",IMC);
        }
        else if (IMC>39.99){
            printf("Seu IMC calculado e : %lf, voce esta na OBESIDADE 3(morbida)\n",IMC);
        }
 return(0);
}

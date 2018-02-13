#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i,verificador;

    printf("Insira um numero para verificar se ele e primo \n");
    scanf("%d",&numero);
    i = 1 ;
    do
        {
        i = i+1;
        verificador = numero % i;
        }
/*Tenta-se dividir todos os valores de 2 até o numero, caso divida apenas pelo numero retorna sim, caso divida por qualquer valor entre, retorna-se não)
*/
        while(verificador != 0 || verificador == numero);
    if(i == numero){
        printf("SIM, ele e primo");
    }
    else
        printf("NAO, ele nao e primo");

    return(0);
}

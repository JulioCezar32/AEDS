#include <stdio.h>
#include <stdlib.h>

int main()
{
  float nota[4],cred[4],conceito[4];
  float RSG;
  int i;
  /* Inserção de notas de 0-100, caso a nota inserida seja diferente o programa requisita novamente que o usuário insira uma nota valida*/

  for(i=0; i < 4; i++)
        {
        printf("digite o valor da nota na materia %d\n", i+1);
        scanf("%f",&nota[i]);

        while(nota[i] < 0 || nota[i]> 100){
            printf("A nota digitada e invalida, digite novamente uma nota entre 0 e 100 para continuar \n");
            scanf("%f",&nota[i]);

        }
                    if (nota[i]>=0,nota[i]<40){
                        printf("O conceito nessa disciplina foi F \n");
                        conceito[i]= 0;
                    }
                    else if(nota[i]>=40,nota[i]<60){
                        printf("O conceito nessa disciplina foi E \n");
                    conceito[i]= 1;
                    }
                    else if(nota[i]>=60,nota[i]<70){
                    printf("O conceito nessa disciplina foi D \n");
                    conceito[i]= 2;
                    }
                    else if(nota[i]>=80,nota[i]<80){
                    printf("O conceito nessa disciplina foi C \n");
                    conceito[i]= 3;
                    }
                    else if (nota[i]>=80,nota[i]<90){
                    printf("O conceito nessa disciplina foi B \n");
                    conceito[i]= 4;
                    }
                    else if(nota[i]>=90,nota[i]<=100){

                    printf("O conceito nessa disciplina foi A \n");
                    conceito[i]= 5;
                    }
        };
/* Inserção de creditos de 20-60, caso o credito inserido seja diferente o programa requisita novamente que o usuário insira um valor valido*/

  for (i=0;i<4;i++)
        {
        printf("digite o valor de creditos da materia %d\n",i+1);
        scanf("%f",&cred[i]);
        while(cred[i] < 20 || cred[i]> 60){
            printf("O credito digitado e invalido, digite novamente um credito 0 e 60 para continuar \n");
            scanf("%f",&cred[i]);
            }
        }
  RSG = (conceito[0]*cred[0] + conceito [1] * cred [1] + conceito[3]*cred[3]+conceito[2]*cred[2])/(cred[0]+cred[1]+cred[2]+cred[3]);
    printf("O RSG para as notas e creditos inseridos e %f", RSG);


    return 0;
}

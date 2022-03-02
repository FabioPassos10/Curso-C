#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;
int contador=0;


void main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Função para permitir os acentos
printf("     |--------------------------------------------------|  \n \n");
printf("     |                    Tabuada                       |   \n \n");
printf("     |--------------------------------------------------|  \n \n");
system("pause");
system("cls");

printf("\n Digite o número da Tabuada: ");
scanf("%d", &numero);

system("pause");
printf("     |--------------------------------------------------|  \n \n");
printf("     |                    Tabuada do %d                 |   \n \n", numero);
printf("     |--------------------------------------------------|  \n \n");


for(contador= 0; contador<=10; contador++){//Laço de repetição

    printf("%d x %d = %d\n",numero,contador, numero*contador);

}


}


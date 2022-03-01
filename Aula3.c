#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
      //Declarando Variaveis
int a;
float b;
char c;
bool d;


      // Atribuindo valor as variaveis
a=5;
b= 3.3;
c= 'c';
d = true;


     //Escrevendo na tela

printf("\n ==============Bem vindo============== \n");
printf("\n o valor de a = %d", a);
printf("\n o valor de b = %.2f", b);
printf("\n o valor de c = %c", c);
printf("\n o valor de d = %d", d);


printf("\n Digite o valor de A: ");
scanf("\n %d", &a);
printf("\n Digite o valor de B: ");
scanf("\n %.2f", &b);
printf("\n Digite o valor de C: ");
scanf(" %c", &c);

printf("\n o valor de a = %d \n", a);
printf("\n o valor de b = %.2f \n", b);
printf("\n o valor de b =  %c \n", c);

system("pause");

}

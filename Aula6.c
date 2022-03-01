#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float peso, altura, imc;


int main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Função para permitir os acentos
printf("       |--------------------------------------------------|  \n \n");
printf("       |                      IMC                         |\n \n");
printf("       |--------------------------------------------------|  \n \n");

system("pause");
printf("==========> Cadastrando Notas <========== \n \n");
printf("Digite seu peso em(Kg): ");
scanf("%f", &peso);
printf("Digite sua Altura em(Cm): ");
scanf("%f", &altura);

imc = peso / (altura*2);

printf("Seu IMC é: %.4f", imc);

if(imc < 18.5){
   printf("\n --------------------------------------------------\n");
   printf("Situação: Abaixo do Peso!");
   printf("\n --------------------------------------------------\n");

}else if(imc >=18.5 && imc <=24.9){

  printf("\n --------------------------------------------------\n");
  printf("Situação: Peso Normal!");
  printf("\n --------------------------------------------------\n");

}
}else if(imc >=18.5 && imc <=24.9){

  printf("\n --------------------------------------------------\n");
  printf("Situação: Peso Normal!");
  printf("\n --------------------------------------------------\n");

}



return 0;

}

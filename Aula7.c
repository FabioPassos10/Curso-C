#include <stdio.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");
 //Definindo Variaveis
  int a = 6, b = 3;

printf("========> Operações Matematicas <========");

printf("\n A soma de %d + %d = %d \n",a,b, a + b);

printf("\n A subtração de %d - %d = %d \n",a,b, a - b);

printf("\n A divisão de %d / %d = %d \n",a,b, a / b);

printf("\n A multiplicação de %d * %d = %d \n",a,b, a * b);

printf("\n O Resto da Divisão %d e %d = %d \n",a,b, a % b);

printf("\n O valor absoluto -3 = %d  \n",abs(-3));

}

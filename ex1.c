#include <stdio.h>
#include <stdlib.h>

int main(){

 float n1,n2,n3,rest ;

 printf("==========Bem-vindo==========\n");
 scanf("Digite o valor da sua 1 nota: %d",&n1);
 scanf("Digite o valor da sua 1 nota: %d",&n2);
 scanf("Digite o valor da sua 1 nota: %d",&n3);
 rest= (n1+n2+n3)/3;

 printf("Sua media e: %d",rest);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int numero;
int main(int argc, char *argv[]){
setlocale(LC_ALL,"portuguese");

printf("Sistema\n\n");
printf("1-Windows \n");
printf("2- Linux \n");
printf("Escolha a opção desejada: ");
scanf("%d",&numero);
switch(numero)
{
case 1:
    system("cls");
    printf("iniciando Windows...");
    break;

case 2:
    system("cls");
    printf("iniciando o Linux...");
    break;
}
if(numero>2){
     system("cls");
    printf("Opção invalida!");
}

return 0;
}

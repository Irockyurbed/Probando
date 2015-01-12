/*Construye un programa que calcule y cuente la cantidad de segundos que hay en un determinado numero de dias*/

#include <stdio.h>

int main(){

    int Dia, h, seg;

    printf("Digite los dias: ");
    scanf("%i", &Dia);

    seg = (Dia * 24) * 59;

    printf("\nSegundos en la cantidad de dias descritos: %i\n\n", seg);

system ("pause");
return 0;
}


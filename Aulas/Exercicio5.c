#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um algoritmo que leia 3 valores e informe se eles s�o
    //iguais entre si para formarem os lados de um tri�ngulo equil�tero.
void main(){
    setlocale(LC_ALL, "");
    int ladoA, ladoB, ladoC;
    printf("Informe o comprimento do lado A: ");
    scanf("%d", &ladoA);
    printf("Informe o comprimento do lado B: ");
    scanf("%d", &ladoB);
    printf("Informe o comprimento do lado C: ");
    scanf("%d", &ladoC);
    printf("\n");
    if (ladoA == ladoB && ladoB == ladoC){
        printf("O tri�ngulo � equil�tero");
    }
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("O tri�ngulo � is�sceles");
    }
    else{
        printf("O tri�ngulo � escaleno");
    }
    printf("\n");
system("pause");
}

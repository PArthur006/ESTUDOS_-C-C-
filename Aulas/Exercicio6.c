#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 op��es:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usu�rio escolher uma op��o, mostre o resultado da opera��o escolhida
    com os dois valores lidos.*/

void main(){
    setlocale(LC_ALL, "");

    float v1, v2;
    int opcao;
    printf("Insira o primeiro n�mero: ");
    scanf("%f", &v1);
    printf("Insira o segundo n�mero: ");
    scanf("%f", &v2);

    printf(" 1- Adi��o\n 2-Subtra��o\n 3-Divis�o\n 4-Multiplica��o");
    printf("\nEscolha sua op��o: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        printf("A soma dos valores �: %.2f", v1 + v2);
    case 2:
        printf("A diferen�a entre os valores �: %.2f", v1 - v2);
        break;
    case 3:
        printf("O resto entre os valores �: %.2f", v1 / v2);
        break;
    case 4:
        printf("O produto entre os valores �: %.2f", v1 * v2);
        break;
    }
printf("\n");
system("pause");
}

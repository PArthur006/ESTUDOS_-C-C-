#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Elaborar um programa que leia dois valores inteiros(A e B).Em seguida fa�a uma fun��o
que retorne a soma do dobro dos dois n�umeros lidos.A fun��o dever� armazenar o dobro
de A na pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B.
*/

int main(){
    setlocale(LC_ALL, "");

    int a, b, *pA, *pB;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    a = a * 2;
    b = b * 2;
    pA = &a;
    pB = &b;

    printf("A soma do dobro dos dois n�meros lidos � = %d", *pA + *pB);

    return 0;
}

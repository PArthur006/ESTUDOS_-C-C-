#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Elaborar um programa que leia dois valores inteiros(A e B).Em seguida fa�a uma fun��o
que retorne a soma do dobro dos dois n�umeros lidos.A fun��o dever� armazenar o dobro
de A na pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B.
*/
int SomaDobro(n1, n2);

void main(){
    setlocale(LC_ALL, "");

    int a, b, *pA, *pB;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    pA = &a;
    pB = &b;

    printf("A soma do dobro dos dois n�meros lidos � = %d", SomaDobro(*pA, *pB));
}

int SomaDobro(n1, n2){
    n1 *= 2;
    n2 *= 2;
    return n1 + n2;
}

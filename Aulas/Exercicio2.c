#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float n1, n2, resultado;
    printf("Digite um n�mero: ");
    scanf("%f", &n1);
    printf("\nDIgite outro n�mero: ");
    scanf("%f", &n2);
    resultado = abs(n1 - n2);
    printf("\nA diferen�a absoluta entre %.2f e %.2f � %.2f", n1, n2, resultado);
    system("pause");
}

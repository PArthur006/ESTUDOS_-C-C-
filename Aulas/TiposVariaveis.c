#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, ""); //Permite utilizar acentos em conjunto com o 'include <locale.h>'.

    printf("Ol� mundo \n"); //Printa algo na tela. O '\n' � utilizado para pular uma linha

    int a = 50; //Define a vari�vel 'a'
    int b = 6; //Define a vari�vel 'b'

    printf("O valor de a � = %d \n", a);
}

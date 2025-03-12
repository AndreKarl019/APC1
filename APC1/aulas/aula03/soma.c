/*
Construa um programa que calcule a soma de dois numeros inteiros 
*/
#include <stdio.h> // incluir as bibliotecas 
#include <math.h>
#define PI = 3.14159265

int main() { // funcao principal
    int a, b, c, soma;  

    printf("Digite o primeiro numero: ");  
    scanf("%d", &a);  
    printf("Digite o segundo numero: ");    
    scanf("%d", &b);  
    soma = a + b;  
    printf("A soma de %d e %d eh: %d", a, b, soma);
    printf("Digite um angulo: ");
    scanf("%d", &c);
    printf("Seno de 0 eh %f\n",sin(c));
    return 0;
}
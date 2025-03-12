#include <stdio.h>

int main(){
    // int num1;
    // int num2;
    // int num3;
    int numeros[10]; // array ou vetor

    numeros[0] = 10; // primeira posicao
    numeros[1] = -45; // segunda posicao
    numeros[2] = 5;
    numeros[3] = -4;
    numeros[4] = 0;
    numeros[5] = 32;
    numeros[6] = 11;
    numeros[7] = 55;
    numeros[8] = 99;
    numeros[9] = -100;
    // numeros[10] // NAUM PODE

    for(int i = 0; i<10; i++){
        printf("%i, \n", numeros[i]);
    }

    float notas[10][2]; // matriz bidimensional

    notas[0][0] = 4.5f;
    notas[0][1] = 8.8f;
    notas[1][0] = 8.6f;
    notas[1][1] = 9.6f;
    notas[2][0] = 6.6f;
    notas[2][1] = 6.5f;
    notas[3][0] = 7.7f;
    notas[3][1] = 4.5f;
    notas[4][0] = 4.8f;
    notas[4][1] = 4.5f;
    notas[5][0] = 4.7f;
    notas[5][1] = 4.5f;
    notas[6][0] = 4.3f;
    notas[6][1] = 9.2f;
    notas[7][0] = 0.5f;
    notas[7][1] = 8.5f;
    notas[8][0] = 7.5f;
    notas[8][1] = 9.5f;
    notas[9][0] = 3.5f;
    notas[9][1] = 4.6f;

    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            printf("%.1f, ", notas[i][j]);
        }

    }
    
    





    return 0;
}
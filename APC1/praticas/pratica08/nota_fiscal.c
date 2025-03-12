#include <stdio.h>

int main(){
    float total = 0.0f, nota_fiscal[5][3];

    for(int i = 0; i<5; i++){
            printf("insira o preco do produto: ");
            scanf("%f", &nota_fiscal[i][0]);
            while(getchar()!='\n');
            printf("Insira a quantidade comprada desse item: ");
            scanf("%f", &nota_fiscal[i][1]);
            while(getchar()!='\n');
            nota_fiscal[i][2] = nota_fiscal[i][0]*nota_fiscal[i][1];
            total = total + nota_fiscal[i][2];  
    }
    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            printf("R$ %.2f\t", nota_fiscal[i][j]);
        }
        printf("\n");
    }
    printf("Total:R$ %f", total);

    return 0;
}
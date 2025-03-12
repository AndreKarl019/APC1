#include <stdio.h>

int main(){
    float temperatura;
    int mtoquente, quente, agrad, frio;
    printf("Qual a temperatura do ambiente: ");
    scanf("%f", &temperatura);
    mtoquente = temperatura >= 40;
    quente = (temperatura<40)&&(temperatura>=30);
    agrad = (temperatura>=20)&&(temperatura<30);
    frio = temperatura<20;
    
    if(mtoquente){
        printf("A temperatura esta muito quente.\n");
    }else if(quente){
        printf("A temperatura esta quente.\n");
    }else if(agrad){
    printf("A temperatura esta agradavel.\n"); 
    }else if(frio){
        printf("A temperatura esta fria.\n");
    }else{
        printf("A temperatura eh invalida.\n");
    }

    return 0;
}
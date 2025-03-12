#include <stdio.h>

int main(){
 int n, anterior=0, proximo, auxiliar = 0;
 printf("Qual numero da sequencia deseja verificar: ");
 scanf("%i",&n);
 for(int i=0;i!=n;i++){
    if(auxiliar==0){
        proximo = auxiliar+anterior;
        }else{
            proximo = auxiliar+anterior;
            anterior = auxiliar;
        }
    if(auxiliar==0){
        auxiliar = 1;
    }else{
        auxiliar = proximo;
    }
    printf("%i\n", proximo);
 }
 printf("O %io numero da sequencia eh %i", n, proximo);
    return 0;
}
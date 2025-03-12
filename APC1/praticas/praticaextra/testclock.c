#include <stdio.h>
#include <time.h>

int main (){
int msec = 0, trigger = 10, s;
clock_t before  = clock();
scanf("%i", &s);
clock_t difference = clock() - before;
msec = difference*1000 / CLOCKS_PER_SEC;
printf("o tempo foi %d", msec);
    return 0;
}
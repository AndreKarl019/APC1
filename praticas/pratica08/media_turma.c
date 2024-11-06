#include <stdio.h>

int main()
{
    float nota[10], soma = 0, media;
    int passados = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("insira uma nota: ");
        scanf("%f", &nota[i]);
        while (getchar() != '\n');
        soma = soma + nota[i];
    }
    media = soma / 10.0;
    for (int i = 0; i < 10; i++)
    {
        if (nota[i] >= media)
        {
            passados++;
        }
    }
    printf("A media da turma foi %.2f e a quantidade de alunos acima desse valor foi de %i \n", media, passados);
    return 0;
}
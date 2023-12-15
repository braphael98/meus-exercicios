// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int idade;
    int total;
    int divisor = 0;
    float media;
    while (idade != 0)
    {
        printf("Digite sua idade: ");
        scanf("%i", &idade);
        total += idade;
        divisor++;
    }
    media = total / divisor;
    printf("A media é: %f", media);

    return 0;
}

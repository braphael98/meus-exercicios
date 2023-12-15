// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    float altura, media;
    char sexo[3];
    float maiorAltura = 0;
    float menorAltura = 5;
    int divisor = 0;
    int numeroHomens = 0;
    float alturaMulheres;

    for (int i = 0; i <= 2; i++)
    {
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu sexo (M ou F): ");
        scanf("%s", sexo);
        if (altura > maiorAltura)
        {
            maiorAltura = altura;
        }
        if (menorAltura > altura)
        {
            menorAltura = altura;
        }
        if (strcmp(sexo, "F") == 0)
        {
            alturaMulheres += altura;
            divisor++;
        }
        else if (strcmp(sexo, "M") == 0)
        {
            numeroHomens++;
        }
    }
    printf("A maior altura é %f\n", maiorAltura);
    printf("A menor altura é %f\n", menorAltura);
    media = alturaMulheres / divisor;
    printf("Media da altura das mulheres:%f\n ", media);
    printf("Numero de homens: %i", numeroHomens);
    return 0;
}

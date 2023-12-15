// Online C compiler to run C program online
#include <stdio.h>
void calculo()
{

    float largura, comprimento, area, total;
    char nome[50];
    char i[1];

    while (strcmp(i, "N") != 0)
    {

        printf("Digite o nome do comodo: ");
        scanf("%s", &nome);
        printf("Digite a largura do comodo: ");
        scanf("%f", &largura);
        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);
        area = largura * comprimento;
        printf("A largura do comodo  (%s) é %f m²\n", area, nome);
        printf("Deseja continuar (S ou N) ?\n");
        scanf("%s", &i);
        total += area;
    }
    printf("/---------------------------/\n");
    printf("o valor total acumulado da área residencial:%f M² ", total);
}

int main()
{
    calculo();

    return 0;
}

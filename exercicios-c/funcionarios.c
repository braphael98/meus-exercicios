#include <stdio.h>

void calculo()
{
    char nome[50];
    char i[3];
    float numDependentes, horasTrab;
    float valorHoraTrab = 12.50;
    float valorDependente = 125.55;
    float salBruto, salLiquido, teste;
    int contagem = 0;

    while (strcmp(i, "FIM") != 0)
    {
        printf("Digite seu nome: ");
        scanf("%s", &nome);
        printf("Digite o numero de dependentes: ");
        scanf("%f", &numDependentes);
        printf("Digite o numero de horas trabalhadas: ");
        scanf("%f", &horasTrab);

        contagem++;
        salBruto = horasTrab * valorHoraTrab + valorDependente * numDependentes;
        salLiquido = salBruto - (0.12 * salBruto);
        printf("Deseja continuar ?:  ");
        scanf("%s", i);
    }
    printf("/---------------------------/\n");
    printf("Numero total de funcionarios:%f\n", contagem);
}

int main()
{
    calculo();
    return 0;
}

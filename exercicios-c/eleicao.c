#include <stdio.h>
#include <string.h>

int main()
{
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, anulado = 0, brancos = 0;
    char i;
    int numeroDeVotos = 0;
    int totalDeVotos = 0;

    while (i != 'N')
    {
        printf("/------ELEIÇÃO-----------/\n");
        printf("Candidato 1 - José da silva\nCanditado 2 - Pedro dos Santos\nCandidato 3 - Jorge Luiz\n");
        printf("Anular - 5, Branco - 6\n");
        printf("Digite seu voto: ");
        scanf("%i", &voto);
        totalDeVotos++;
        if (voto == 1)
        {
            candidato1++;

            printf("/----votou!-------/\n");
        }
        else if (voto == 2)
        {
            candidato2++;

            printf("/----votou!-------/\n");
        }
        else if (voto == 3)
        {
            candidato3++;

            printf("/----votou!-------/\n");
        }
        else if (voto == 5)
        {
            anulado++;
            printf("/----votou!-------/\n");
        }
        else if (voto == 6)
        {
            brancos++;
        }
        if (candidato1 >= candidato2 && candidato1 >= candidato3)
        {
            candidato1 += brancos;
        }
        else if (candidato2 >= candidato1 && candidato2 >= candidato3)
        {
            candidato2 += brancos;
        }
        else if (candidato3 >= candidato1 && candidato3 >= candidato2)
        {
            candidato3 += brancos;
        }
        else
        {
            anulado += brancos;
        }

        printf("Deseja continuar ? (S ou N): ");
        scanf(" %c", &i);
    }

    printf("Total de votos: %i \n", totalDeVotos);
    printf("Candidato 1: %i votos\n", candidato1);
    printf("Candidato 2: %i votos\n", candidato2);
    printf("Candidato 3: %i votos\n", candidato3);
    printf("Anulados: %i votos\n", anulado);
    printf("Número de votos em branco: %i\n", brancos);
    printf("Fim da votação");

    return 0;
}

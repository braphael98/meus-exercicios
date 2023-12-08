#include <stdio.h>

int main() {
int polegadas;
float milhas,jardas,pes;
printf("Digite a medida que deseja em pés: ");
scanf("%f",&pes);
polegadas = pes*12;
jardas = pes/3;
milhas = jardas/1760;

printf("\nSua medida em polegadas: %i",polegadas);
printf("\nSua medida em jardas: %f",jardas);
printf("\nSua medida em milhas: %f",milhas);



    return 0;
}
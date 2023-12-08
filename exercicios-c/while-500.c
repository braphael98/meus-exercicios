// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int num, contagem =0;
  int i = 0;
    while( i <500){
        printf("Digite um numero:");
        scanf("%i",&num);
        i = i + num;
        contagem++;
    }
    printf("Voce digitou %i numeros que resultou na soma de 500",contagem);
    printf("\n----------------------------------------------------------");

    return 0;
}

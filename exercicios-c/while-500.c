// Online C compiler to run C program online
#include <stdio.h>

int main() {
int numero = 0, contagem = 0, somaNumeros = 0;
while(somaNumeros<500){
    printf("Digite um numero: ");
    scanf("%i",&numero);
    somaNumeros = somaNumeros + numero;
    contagem ++;
}
    printf("Leu %i numeros",contagem);
    return 0;
}

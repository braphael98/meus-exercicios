#include <stdio.h>

int main() {
 int numero, impares = 0, resto;
    for (int i = 1; i<=10; i++){
        printf("Digite o numero %i: ",i);
        scanf("%i",&numero);
        resto = numero%2;
        if (resto >0) {  //todo numero impar é maior que 0 no resto da divisão
            impares++;
        }
        
    }
    printf("Total de impares: %i ",impares);
    return 0;
}

#include <stdio.h>

int main() {
float velocidade,multa;
printf("Digite a velocidade do veiculo KM/H: ");
scanf("%f",&velocidade);
if(velocidade > 80){
multa = velocidade*5;
printf("Valor da multa R$: %f",multa);
}
else{
    printf("Carro abaixo da velocidade");
}


    return 0;
}
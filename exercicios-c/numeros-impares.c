#include <stdio.h>

int main() {
 int num,contagem = 0;
 for(int i=1;i<11; i++){
     printf("\n Digite um numero: ");
     scanf("%i",&num);
     contagem++;
 }
  if(num %2){
        printf("você tem %i numeros impares",contagem);
        }

    return 0;
}


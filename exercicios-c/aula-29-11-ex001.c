#include <stdio.h>

int main() {
  int codigo,quantidade;
  float total;
  printf("\nCachorro Quente: 100 R$ 1,20");
  printf("\nBauru simples: 101 R$ 1,30");
  printf("\nBauru com ovo: 102 R$ 1,50");
  printf("\nHamburger: 103 R$ 1,20");
  printf("\nCheeseburger: 104 R$: 1,30");
  printf("\nRefrigerante: 105 R$ 1,00");
  scanf("%i",&codigo);
  printf("Digite a quantidade: ");
  scanf("%i",&quantidade);
  
  if(codigo == 100){
      total = 1.20*quantidade;
      printf("Total a pagar é: %f",total);
  }
  else if(codigo == 101){
      total = 1.30*quantidade;
      printf("Total a pagar é:%f",total);
  }
  else if(codigo == 102){
      total = 1.50*quantidade;
      printf("Total a pagar é: %f",total);
  }
  else if(codigo == 103){
      total = 1.20*quantidade;
      printf("Total a pagar é: %f",total);
  }
  else if (codigo == 104){
      total = 1.30*quantidade;
      printf("Total a pagar é: %f",total);
  }
  else{
      (codigo == 105);
      total = 1.00*quantidade;
      printf("Total a pagar é: %f",total);
  }
    return 0;
  
}


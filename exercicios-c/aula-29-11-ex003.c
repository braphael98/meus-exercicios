#include <stdio.h>

int main() {
  int idade,anosRestantes,anosPassados;
  printf("Digite sua idade: ");
  scanf("%i",&idade);
  if(idade < 18){
      anosRestantes = 18 - idade;
       printf("Faltam %i anos para você se alistar",anosRestantes);
  }
  else if(idade > 18){
  anosPassados = idade - 18;
  printf("Ja se passaram %i anos para você se alistar",anosPassados);
}
else{
    printf("Você precisa se alistar este ano !");
}
    return 0;
}

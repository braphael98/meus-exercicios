#include <stdio.h>

int main() {
  float salarioMin,horasTrabalhadas,numDependentes,horasExtras;
  float valorHora, salarioMes,extras,dependentes,salarioBruto;
  printf("Salario minimo R$ 1.320\n");
  printf("Numero de horas trabalhadas: ");
  scanf("%f",&horasTrabalhadas);
  printf("Numero de dependentes: ");
  scanf("%f",&numDependentes);
  printf("Quantidades de horas extras: ");
  scanf("%f",&horasExtras);
  
  
  salarioMin = 1320;
  
  valorHora = salarioMin/50;
  salarioMes = horasTrabalhadas*valorHora;
  dependentes = numDependentes*32;
  extras = horasExtras+(horasTrabalhadas*1.5);
  salarioBruto = salarioMes+dependentes+extras;
  
  printf("Salario do Bruto: %f",salarioBruto);


  //nao consegui finalizar o exerciio.
    return 0;
}

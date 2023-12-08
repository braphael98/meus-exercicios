#include <stdio.h>
void oi(){
    char texto[] = "Sou uma função  \n";
    printf("%s",texto);
}
int soma (int a, int b){
    return a + b;
}
int multi (int a, int b){
    return a * b;
}
int divisao (int a, int b){
    if(b!=0){
        return a / b;
    }
    else{
        return 0;
    }
}
int sub (int a, int b){
    return a - b;
}
int main() {
   oi();
   int total = soma(5,7);
   printf("%i \n",total);
   int v1,v2;
   printf("Digite valor: ");
   scanf("%i",&v1);
   printf("Digite valor: ");
   scanf("%i",&v2);
   total = soma(v1,v2);
   printf("SOMA %i \n",total);
   total = sub(v1,v2);
   printf("Sub %i \n",total);
   total = multi(v1,v2);
   printf("Multi %i \n",total);
   total = divisao(v1,v2);
   printf("Divisao %i \n",total);
   

    return 0;
}

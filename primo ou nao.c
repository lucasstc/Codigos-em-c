#include <stdio.h>
#include<stdbool.h>

int main(void) {
  printf("\nPrimo ou nao\n");
  int n;
  do{
    printf("\nNumero? ");
    scanf("%i", &n);
  }while(n<2);
  bool primo = true;
  int i = 2;
  while (primo && i <= n/2){
    if(n%i==0){
    primo=false;
    }i++;
    }if(primo)printf("\nprimo.");
  else printf("\nNao primo.");
  
  return 0;
}
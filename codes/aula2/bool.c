#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;

  printf("O tamanho de b eh: %d\n", sizeof b);
  
  b = 0;
  
  printf("O valor de b eh: %zu\n", b);  

  return 0;
    
 }

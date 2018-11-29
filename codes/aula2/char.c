#include <stdio.h>

int main(void) {
unsigned char c;
  
  printf("O tamanho de c eh: %lu\n", sizeof c);
  
  c = 129;
  printf("O valor de c agora eh: %i\n", c);

  return 0;
}

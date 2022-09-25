#include <stdio.h> 
// pide una letra

int main() 
{ 
  char letra;
  void print_alphabet (void);
  printf("Por favor ingrese un caracter: \n"); 
  scanf("%c", &letra); 
  printf("Usted escribio la letra: %c\n", letra); 
  return 0; 
} 

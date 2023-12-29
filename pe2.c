#include <stdio.h>

int main(void)
{
  int fib = 1, fibt = 1, soma = 0; 
  
  while (fib < 4000000) 
  {
    if (fib % 2 == 0)
    {
        soma += fib;
    } 
    fib = fibt + fib;
    fibt = fib - fibt;
  }
  printf ("soma: %d", soma);  
}
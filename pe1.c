int main(void)
{
  int contador = 1, soma = 0; 
  
  while (contador < 1000) 
  {
    if ((contador % 3 == 0) || (contador % 5 == 0))
    {
        soma += contador;
    } 
    contador++;
  }
  printf ("%d ", soma);  
}
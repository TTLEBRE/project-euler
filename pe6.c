#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int num = 100, soma1 = 0, cont1 = 0,soma2 = 0, cont2 = 1;
    while (cont1 <= num)
    {
        soma1  = soma1 + cont1;
        cont1 = cont1 + 1;  
        
    }
    soma1 = soma1 * soma1;
    

    while (cont2 <= num)
    {
        soma2  = soma2 + pow(cont2, 2);
        cont2 = cont2 + 1;  
    }
    printf("%lld", soma1 - soma2);
}
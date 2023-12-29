#include <stdio.h>

int primo(int num)
{

    int cont = 1, divs = 0;
    for (cont = 1; cont <= num / 2; ++cont)
    {
        if (num % cont == 0)
        {
            ++divs;
        }
        if (divs > 1)
        {
            break;
        }
    }
    cont = cont + 1;
    return divs;
}

int main ()
{
    long long int ex = 600851475143, contfinal = 0, divisor = 0;
    while (contfinal <= ex / 2)
    {
        divisor = primo(contfinal);
        if (divisor == 1)
        {
            if (ex % contfinal == 0)
            {
                printf("%d ", contfinal);
            }
            
        }
        contfinal = contfinal + 1;
    }
    printf("fim");
}
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

int main (void)
{
    int nums = 0, contprimo = 0, ultprimo = 0, fim = 1001;
    do
    {
        nums = nums + 1;
        if (primo(nums) == 1)
        {
            ultprimo = nums;
            contprimo = contprimo + 1;  
        }
        if (fim == contprimo)
        {
            break;
        }
    } while (1);
    printf("%d ", ultprimo);
}
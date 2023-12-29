#include <stdio.h>
#include <math.h>

int palin(num1)
{
    int num2 = num1, multi = 1,  dig = 0,  soma = 0, cont;
    do
    {
        num1 = num1 / 10;
        multi = multi * 10; 
    } while (num1 != 0);

    multi = multi / 10;

    for (cont = 0; cont < num2; cont++)
    {
        dig = num2 % 10;
        dig = dig * multi;
        multi = multi / 10;
        num2 = num2 / 10;
        soma = soma + dig;
        if (num2 == 0)
        {
            break;
        }
    }
    dig = num2 % 10;
    soma = soma + dig; 
    return soma;
}

int main(void)
{
    int n1, n2, n1f, n2f, testnumf = 0;
    for (n1 = 0; n1 < 1000; n1++)
    {
        for (n2 = 0; n2 < 1000; n2++)
        {
            int testnum = n1 * n2;
            if (testnum == palin(testnum))
            {
                if (testnum > testnumf)
                {
                    testnumf = testnum; 
                }
                
            } 
        }
        
    }
    printf("\n%d", testnumf);
}
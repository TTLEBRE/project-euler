#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int soma_divisores(int num)
{
    int soma = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
        }
    }
    return soma;    
}

int main(void)
{
    int soma = 0;
    int soma_nums = 0;

    for (int i = 1; i < 10001; i++)
    {
        soma = soma_divisores(i);
        
        if (i == soma_divisores(soma))
        {        
            if (i != soma)
            {
                cout << i;
                cout << "\n";
                soma_nums += i;
            }
        }    
    }

    cout << soma_nums;
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

bool verifica_primo(int num)
{   
    bool res = true;

    for (int i = 2; i <= sqrt(num); i++)
    {   
        if (num % i == 0)
        {
            res = false;
            break;
        }    
    }
    if (num < 2)
    {
        res = false;
    }
    
    return res;
}

bool trunc_direita(int num)
{
    bool res = true;

    if (num > 9)
    {
        while (num > 9)
        {
            num = (num - num % 10) / 10;

            if (not verifica_primo(num))
            {
                res = false;
            }
        } 
    }
    else
    {
        res = false;
    }
    return res;
}

bool trunc_esquerda(int num)
{
    bool res = true;
    int tamanho = 1;
    int num_backup = num;

    if (num > 9)
    {
      while (num > 9)
      {
        num = (num - num % 10) / 10;
        tamanho = tamanho * 10;
      }

      num = num_backup;
      
      while (tamanho > 9)
      {
        num = num % tamanho;
        tamanho = tamanho / 10;
        
        if (not verifica_primo(num))
        {
            res = false;
        }
      } 
    }    
    else
    {
        res = false;
    }
    return res;
}

int main(void)
{
    int soma_truncados = 0;

    for (int i = 0; i < 1000000; i++)
    {
        if (verifica_primo(i))
        {
            if (trunc_esquerda(i) and trunc_direita(i))
            {
                soma_truncados += i;

                cout << i;
                cout << "\n";
            }
        }     
    }
    cout << "soma: ";
    cout << soma_truncados; 
}
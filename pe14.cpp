#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    long long int valor1 = 1000001;
    long long int valor2;

    int contagem = 0;
    int maior_contagem = 0;

    int maior_numero;

    cout << "inicio\n";

    for (valor1; valor1 > 0; valor1-=2)
    {
        valor2 = valor1;
        contagem = 1;

        while (valor2 > 1)
        {
            contagem++;
            //cout << valor2 << " ";

            if (valor2 % 2 == 0)
            {
                valor2 = valor2 / 2;
            }
            else
            {
                valor2 = (valor2 * 3) + 1;
            }
        }
        //cout << "1\n";

        if (contagem > maior_contagem)
        {
            maior_contagem = contagem;
            maior_numero = valor1;
        }
    }
    cout << "\n" << maior_numero << "\n" << maior_contagem;
}
# include <stdio.h>
# include <math.h>

int primoFac(n)
{
    int pot = 0, divs = 1;
	while (n%2 == 0)
	{
		pot++;
		n = n/2;
	}
    pot++;
    divs = divs * pot;
    pot = 0;
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			pot++;
			n = n/i;
		}
        pot++;
        divs = divs * pot;
        pot = 0;
	}
	if (n > 2)
    pot++;
    pot++;
		divs = divs * pot;
    return divs;
}

int trinum(num)
{
    int res;
    if (num % 2 == 1)
    {
        num--;
        res = (1 + num) * (num / 2);
        num++;
        res = res + num;
    }
    else
    {
        res = (1 + num) * (num / 2);
    }
    return res;
}

int main()
{
    int cont = 0, n1, n2;
    do
    {
        cont++; 
        n1 = trinum(cont);
        n2 = primoFac(n1);
    } while (n2 < 500);
    printf("\nresultado: %d", n1);
}

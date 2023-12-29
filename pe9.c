#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cat1 = 0, cat2 = 0, hipo = 0, somaabc = 1000;
    for (cat1 = 1; cat1 < somaabc / 3; cat1++) 
    {
        for (cat2 = cat1; cat2 < somaabc / 2; cat2++) 
        {
            hipo = somaabc - cat1 - cat2;
    
            if (cat1 * cat1 + cat2 * cat2 == hipo * hipo) 
            {
                printf("%d", cat1 * cat2 * hipo);
                break;
            }
        }
    }
}
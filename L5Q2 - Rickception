#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rickception(int n, int t, int l)
{
    int a;
    if(l == t)
    {
        printf("%d", n);
        return 0;
    }
    else
    {
        if(l % 2 == 0) // se o numero for par
        {
            n = n + 3; // soma 3 ao n
        }
        else // se for impar
        {
            a = n % 5; // somar com o resto da divis�o por 5
        }
        return rickception(n + a, t, l + 1);
    }    
}

int main()
{
    int n, t, l;
    
    scanf("%d%d", &n, &t);

    rickception(n, t, l);
    return 0;
}

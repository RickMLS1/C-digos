#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(double n, double n2, int i, int aux)
{
    scanf("%lf\n%lf", &n, &n2);
    
    double desconto;
    
    if(aux == 5)
    {
        printf("%d", i);
        return 0;
    }
    
    else
    {
        desconto = n * 0.80;
        
        if(desconto >= n2)
        {
            i++;
        }
        return compare(n, n2, i, aux+1);
    }
}

int main() 
{
    double n, n2;
    
    compare(n, n2, 0, 0);
    
	return 0;
}

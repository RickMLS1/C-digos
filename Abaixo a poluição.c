#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void conta_casa(int n, int i, double resultado)
{
    scanf("%d", &n);
    
    if(n == 999)
    {
        printf("%.2lf\n%d", resultado, i);
        return;
    }
    else
    {
        if(n <= 2)
        {
        
        }
        else
        {
            resultado += (n-2) * 12.89;
            i++;
        }
    }
    conta_casa(n, i, resultado);
}

int main() 
{
    int n, resultado;
    conta_casa(n, 0, 0);
	return 0;
}

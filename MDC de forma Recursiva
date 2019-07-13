#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MDC(int a, int b)
{
    int divisor, dividendo, resto, aux;
    
    if(a > b)
    {
        aux = a;   
        a = b;
        b = aux;
    }
        dividendo = b;
        divisor = a;
        resto = dividendo % divisor;
        
        if(resto == 0)
        {
            return divisor;
        }
            
            if(resto > 0)
            {
                return MDC(divisor, resto);
            }
}

int main() 
{
    int num, num2;
    int MDC(int a, int b);
    
    scanf("%d\n%d", &num, &num2);
    printf("%d", MDC(num, num2));
	
	return 0;
}

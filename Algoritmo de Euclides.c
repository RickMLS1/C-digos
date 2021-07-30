#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int algeuclides(int a, int b)
{
    int dividido, dividendo, resto, alinhar;
    
    if(a > b)
    {
        alinhar = a;   
        a = b;
        b = alinhar;
    }
        dividido = b;
        dividendo = a;
        resto = dividido % dividendo;
        
        if(resto == 0)
        {
            return dividendo;
        }
            
            if(resto > 0)
            {
                return algeuclides(dividendo, resto);
            }
}

int loop(int i)
{
    int c, d;
    
    if(i != 0)
    {
        scanf("%d%d", &c, &d);
        printf("MDC(%d,%d) = %d\n", c, d, algeuclides(c, d));
        
        i = i - 1;
        
        return loop(i);
    }
    else
    {
        return 0;
    }

}

int main() 
{
    int i;
    
    scanf("%d", &i);
    loop(i);
    
	return 0;
}

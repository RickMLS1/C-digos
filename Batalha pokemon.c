#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void battlepokemon(double v1, double d1, double v2, double d2, double tc, double tb)
{
    if(tb >= tc)
    {
        printf("Clodes\n");
        return;
    }
    else if(tb == 0)
    {
        printf("Bezaliel\n");
        return;
    }
    else
    {
        d1 = d1 + 50;
        
        tb = tb -1;
        
        tc = ceil(v2 / d1);
        
        battlepokemon(v1, d1, v2, d2, tc, tb);
    }
}

void loopokemon(int n, int i)
{
    double v1, d1, v2, d2;
    
    if(n == i)
    {
        return;
    }
    else
    {
        scanf("%lf %lf %lf %lf", &v1, &v2, &d1, &d2);
        
        battlepokemon(v1, d1, v2, d2, ceil(v2 / d1), ceil(v1 / d2));
        
        loopokemon(n, i + 1);
    }
}


int main() 
{
    int n;
    
    scanf("%d", &n);
    
    loopokemon(n, 0);
    
	return 0;
}

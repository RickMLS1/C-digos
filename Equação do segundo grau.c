#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double a, b, c, potencia, delta, raiz, x1, x2;
    
    scanf("%lf %lf %lf",&a, &b, &c);
    
    potencia = pow(b,2);
    delta = (potencia - 4 * a *c);
    raiz = sqrt(delta); 
    
    if(delta < 0)
    {
       printf("NRR");
    }
    else 
    {
        if(a == 0)
        {    
            printf("NEESG");
        }
    else
    {
        if(delta > 0)
        {
            x1 = (-b + raiz) / (2.0 * a);
       
	        x2 = (-b - raiz) / (2.0 * a);
	   
            printf("%.2lf\n%.2lf", x1, x2);
        }
    else
    { 
        if(delta == 0)
        {
            x1 = (-b + raiz) / (2.0 * a);
       
	        x2 = (-b - raiz) / (2.0 * a);
	   
            printf("%.2lf\n%.2lf", x1, x2); 
        }
    }
    }
    }
	return 0;
}

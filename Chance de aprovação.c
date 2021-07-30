#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   
    double pp, pr, ppr;
    
    scanf("%lf %lf", &pp, &pr);
    
    ppr = (pr*100) / pp;
    
    if((ppr >=0) && (ppr <20))
    {
        printf("%.2lf%% 4.40%% Pessimo", ppr);
    }
   
    else if((ppr >=20) && (ppr <40))
    {
        printf("%.2lf%% 31.65%% Ruim", ppr);
    }
    
    else if((ppr >=40) && (ppr <60))
    {
        printf("%.2lf%% 56.82%% Bom", ppr);
    }
   
    else if((ppr >=60) && (ppr <80))
    {
        printf("%.2lf%% 80.00%% Muito Bom", ppr);
    }
   
    else if((ppr >= 80) && (ppr <=100))
    {
        printf("%.2lf%% 94.00%% Excelente", ppr);
    }
    
	return 0;
}

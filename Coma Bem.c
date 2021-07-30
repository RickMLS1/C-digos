#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double gasto, pagar;
    
    scanf("%lf", &gasto);
    
    pagar = (gasto / 10.0) + gasto;
    
    printf("%.2f", pagar);
    
	return 0;
}

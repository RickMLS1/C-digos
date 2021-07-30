#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double A, B, C, D, DIFERENCA;
    
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    
    DIFERENCA = A*B - C*D;
    
    printf(" DIFERENCA = %.0f\n", DIFERENCA);
    
	return 0;
}

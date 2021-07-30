#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double pi, Area, R;
    
    scanf("%lf", &R);
    
    pi = 3.14159;
    Area = (3.14159*pow(R, 2)) / 10000;
    
    printf("Area = %.4f", Area);
	
	return 0;
}

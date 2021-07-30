#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double a, b, c;
    scanf("%lf\n %lf\n %lf\n", &a, &b, &c);
    
    if(a == b && b == c && c == a)
    {
        printf("equilatero");
    }
    else if(a != b && b != c && c != a)
    {
        printf("escaleno");
    }
    else
    {
        printf("isosceles");
    }
	return 0;
}

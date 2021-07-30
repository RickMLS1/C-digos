#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double NUMBER, nht, vrh, SALARY;
    
    scanf("%lf %lf %lf", &NUMBER, &nht, &vrh);
    
    SALARY = (nht*vrh);
    
    printf("NUMBER = %.0f\n", NUMBER);
    printf("SALARY = R$ %.2f\n", SALARY);
	return 0;
}

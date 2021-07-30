#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double litro, desconto;
    char combustivel;
    scanf("%lf\n %c", &litro, &combustivel);
    
    if((combustivel=='A') && (litro<=20.0))
    {
        desconto = (litro*1.90)*0.97;
        printf("R$ %.2lf\n", desconto);
    }
    else if((combustivel=='A') && (litro>20.0))
    {
        desconto = (litro*1.90)*0.95;
        printf("R$ %.2lf\n", desconto);
    }
    else if((combustivel=='G') && (litro<=20))
    {
        desconto = (litro*2.50)*0.96;
        printf("R$ %.2lf\n", desconto);
    }
    else if((combustivel=='G') && (litro>20))
    {
        desconto = (litro*2.50)*0.94;
        printf("R$ %.2lf\n", desconto);
    }
    else if((combustivel=='D') && (litro<=25))
    {
        desconto = (litro*1.66);
        printf("R$ %.2lf\n", desconto);
    }
    else if((combustivel=='D') && (litro>25))
    {
        desconto = (litro*1.66)*0.96;
        printf("R$ %.2lf\n", desconto);
    }
        
	return 0;
}

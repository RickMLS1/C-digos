#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario;
    
    scanf("%lf", &salario);
    
    if(salario > 500)
    {
        salario = salario + (salario *0.10);
        printf("%.2lf", salario);
    }
    else
    {
    if(salario > 300)
    {
        
        salario = salario + (salario *0.07);
        printf("%.2lf", salario);
    }
    else
    {
        if(salario <= 300)
        {
            salario = salario + (salario *0.05);
            printf("%.2lf", salario);
        }
    }
    }
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario, valorcomp, limite, Vmaxparc;
    
    scanf("%lf\n %lf\n", &salario, &valorcomp);
    limite = (salario * 0.30);
    Vmaxparc = (limite - valorcomp);
    
    if(valorcomp < limite)
    {
        printf("%.2lf", Vmaxparc);
    }
    else
    {
        printf("0.00");
    }
	return 0;
}

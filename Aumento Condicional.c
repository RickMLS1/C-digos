#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 

{
    double salario, valoraumento, novosalario;
    scanf("%lf", &salario);
    
    if(salario<=280)
    {
        valoraumento = salario*0.20;
        novosalario  = valoraumento + salario;
        printf("%.2lf\n20\n%.2lf\n%.2lf", salario, valoraumento, novosalario);
    }
    else if(salario>280 && salario<=700)
    {
        valoraumento = salario*0.15;
        novosalario  = valoraumento + salario;
        printf("%.2lf\n15\n%.2lf\n%.2lf", salario, valoraumento, novosalario);
    }
    else if(salario>700 && salario<1500)
    {
        valoraumento = salario*0.10;
        novosalario  = valoraumento + salario;
        printf("%.2lf\n10\n%.2lf\n%.2lf", salario, valoraumento, novosalario);
    }
    else
    {
        valoraumento = salario*0.05;
        novosalario  = valoraumento + salario;
        printf("%.2lf\n5\n%.2lf\n%.2lf", salario, valoraumento, novosalario);
    }
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Arvore_natal(double VA, double qnt1, double valor1, double qnt2, double valor2, double qnt3, double valor3)
{
    double resultado, resultado2;
    
    resultado  = (qnt1*valor1) + (qnt2*valor2) + (qnt3*valor3) + VA;
    resultado2 = resultado / 21;
    
    printf("%.2lf\n%.2lf", resultado, resultado2);
}

int main() 
{
    double VA, qnt1, valor1, qnt2, valor2, qnt3, valor3;
    
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n", &VA, &qnt1, &valor1, &qnt2, &valor2, &qnt3, &valor3);
    
    Arvore_natal(VA, qnt1, valor1, qnt2, valor2, qnt3, valor3);
    
	return 0;
}

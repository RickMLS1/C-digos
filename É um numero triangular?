#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tricolor(int n, int n1, int n2, int n3)
{
    int aux;
    
    if(n1 > n2)
    {
        aux = n1;
        n1  = n2;
        n2  = aux;
    }
    if(n2 > n3)
    {
        aux = n2;
        n2  = n3;
        n3  = aux;
    }
    if(n1 > n3)
    {
        aux = n1;
        n1  = n3;
        n3  = aux;
    }
    printf("%d * %d * %d = %d\n", n1, n2, n3, n);
}

void triangulo(int n, int n1, int n2, int n3)
{
    int resultado;
    
    resultado = n1 * n2 * n3;
    
    if(resultado > n)
    {
        printf("Falso");    
    }
    else if(resultado == n)
    {
        tricolor(n, n1, n2, n3);
        printf("Verdadeiro");
    }
    else
    {
        triangulo(n, n1+1, n2+1, n3+1);
    }
}

int main() 
{
    int n, n1, n2, n3;
    
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("Falso");
    }
    else
    {
        triangulo(n, 1, 2, 3);
    }
    
	return 0;
}

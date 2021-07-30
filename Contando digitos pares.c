#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int n, int i)
{
    int resto, quociente; 
   
    if(n == 0) // Condi??o de parada
    {
        return i;
    }
    
    else
    {
        resto = n % 10; // Resto de uma divis?o por 10
  
        if(resto % 2 == 0) // resto de uma divis?o por 2
        {
            i++; // Quando o numero for par, ele soma, e s? vai parar de contar os pares quando o n==0
        }
        return ContaDigitosPares(n/10, i);
    }
}

int main() 
{
    int n, i = 0;
    scanf("%d",&n);
  
    printf("%d", ContaDigitosPares(n, i));

    return 0;
}

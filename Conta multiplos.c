#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void conta_multiplo(int n1, int n2, int i, int aux)
{
    if(aux == 50)
    {
        printf("%d", i);
    }
    else
    {
        if(aux % n1 == 0 && aux % n2 == 0)
        {
            conta_multiplo(n1, n2, i+1, aux+1);
        }
        else
        {
            conta_multiplo(n1, n2, i, aux+1);
        }
    }
    
    
}

int main() 
{
    int n1, n2, i, aux;
    
    scanf("%d\n%d", &n1, &n2);
    
    conta_multiplo(n1, n2, 0, 1);
    
	return 0;
}

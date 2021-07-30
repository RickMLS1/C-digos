#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multiplo(int N, int A, int B, int aux)
{
    if(A == B+1)
    {
        if(aux == 0)
        printf("INEXISTENTE\n");
    }
    else
    {
        if(A%N == 0)
        {
            aux++;
            printf("%d\n", A);       
        }
        return multiplo(N, A+1, B, aux);
    }
}

int main() 
{
    int N, A, B, aux = 0;
    scanf("%d%d%d", &N, &A, &B);
    
    multiplo(N, A, B, aux);
    
    return 0;
}

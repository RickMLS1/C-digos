#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void comparar(int array[], int indice, int x, int i)
{
    if(indice < 10)
    {
        if(array[indice] == x)
        {
            i++;
            comparar(array, indice+1, x, i);
        }
        else
        {
            comparar(array, indice+1, x, i);
        }
    }
    else
    {
        printf("%d", i);
    }
}

void ler_array(int i, int array[])
{
    if (i < 10)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array);
    }
}

int main()
{
    int array[10];
    
    ler_array(0, array);
    
    int x;
    
    scanf("%d", &x);
    
    comparar(array, 0, x, 0);

    return 0;
}

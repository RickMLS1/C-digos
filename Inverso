#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordem_inversa(int i, int array[], int n)
{
    if (i >= 1)
    {
        printf("%d ", array[i]);
        
        ordem_inversa(i - 1, array, n);
    } 
    else 
    {
        printf("%d\n", array[0]);
    }
} 

void ler_array(int i, int array[], int n)
{
    if (i < n)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array, n);
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int array[n];
    
    ler_array(0, array, n);
    ordem_inversa(n - 1, array, n);
    
    return 0;    
}

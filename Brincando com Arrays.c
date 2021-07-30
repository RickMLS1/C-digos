#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprimir_array(int i, int n, int array[])
{
    if (i < n)
    {
        printf("%d ", array[i]);
        imprimir_array(i + 1, n, array);
    }
}

int menor_indice(int i, int n, int array[], int menorInd)
{
    if (i == n)
    {
        return menorInd;
    }
    else
    {
        if (array[i] < array[menorInd])
        {
            menorInd = i;
        }

        return menor_indice(i + 1, n, array, menorInd);
    }
}

void trocar(int n, int array[])
{
    int menorInd = menor_indice(0, n, array, 0);

    int aux = array[n - 1];
    array[n - 1] = array[menorInd];
    array[menorInd] = aux;
}

void ordenar(int n, int array[])
{
    if (n > 1)
    {
        trocar(n, array);
        ordenar(n - 1, array);
    }
}

void corta_pra_esquerda(int i, int n, int array[])
{
    if(i < n)
    {
        printf("%d ", array[i]);
        
        corta_pra_esquerda(i+1, n, array);
  
    } 
    else 
    {
        printf("%d\n", array[0]);
    }
    
    
}

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

    corta_pra_esquerda(1, n, array);

    ordenar(n, array);

    imprimir_array(0, n, array);

    return 0;
}

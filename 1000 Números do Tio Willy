#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprimir_indice(int i, int array[], int num, int qnt_vezes)
{
    if(i < 1000)
    {
        if(num == array[i]) // se o num for igual ao indice do array
        {
            imprimir_indice(i + 1, array, num, qnt_vezes + 1); // soma mais um no indice e na qnt de vezes que ele apareceu
        }    
        else // caso contrario 
        {
            imprimir_indice(i + 1, array, num, qnt_vezes); // soma mais 1 no indice do array e verifica novamente
        }    
    }
    else
    {
        printf("%d appeared %d times\n", num, qnt_vezes);
    }
}

int ler_indice(int i, int array[])
{
    if(i < 1000)
    {
        int n;
        
        scanf("%d", &n); // escaneia o numero digitado
        
        if(n == -1) // l? o primeiro termo e verifica se ? -1 se for acaba a fun??o
        {
            return 0;
        }
        else // se n?o for 
        {
            array[i] = n;
            ler_indice(i + 1, array);
            //fun??o vai ler mais 1000 numeros e verficar se o num ? -1 outra vez
        }
    }
    else
    {
        int n; 
        
        scanf("%d", &n); // escaneia o num
        
        imprimir_indice(0, array, n, 0); // chama a fun??o imprimir o indice
        
        ler_indice(0, array);
    }
}

int main() 
{
    int array[1000];
    
    ler_indice(0, array);
    
	return 0;
}

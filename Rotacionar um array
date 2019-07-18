#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void imprimir_array(int i, int n, int array_esq[]){
    if (i < n)
    {
        printf("%d\n", array_esq[i]);
        imprimir_array(i + 1, n, array_esq);
    }
}
void ler_deslocamento(int d, int i, int array[], int n, int array_esq[]){
    if(i < n)
    {
        array_esq[i] = array[d%n];
        ler_deslocamento(d+1, i+1, array, n, array_esq);
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
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    ler_array(0, array, n);
    int d;
    scanf("%d", &d);
    int array_esq[n];
    ler_deslocamento(d, 0, array, n, array_esq);
    imprimir_array(0, n, array_esq);
    
	return 0;
}

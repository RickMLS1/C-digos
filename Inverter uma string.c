#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordem_inversa(int i, char array[])
{
    if (i < 0)
    {
 
    } 
    else 
    {
        printf("%c", array[i]);
        ordem_inversa(i-1, array);
    }
} 

void ler_array(int i, char array[])
{
    if (scanf("%c", &array[i]) != EOF)
    {
        ler_array(i + 1, array);
    }
    else
    {
        array[i] = '\0';
    }
}

int main() 
{
    char array[255];
    
    ler_array(0, array);
    
    ordem_inversa(strlen(array)-1, array);
    
	return 0;
}

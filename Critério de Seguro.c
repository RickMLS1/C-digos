#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int sexo, idade;
    
    scanf("%d %d", &sexo, &idade);
    
    if((sexo == 0) && (idade == 0))
    {
        printf("0\n");
    }
    if((sexo == 0) && (idade == 1))
    {
        printf("1\n");
    }
    if((sexo == 1) && (idade == 0))
    {
        printf("0\n");
    }
    if ((sexo == 1) && (idade == 1))
    {
        printf("0\n");
    }
	return 0;
}

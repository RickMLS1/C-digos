#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cafezao(int capcafe, int i, int ctrl)
{
    char size;
    int caixa, xicara;
    
    scanf("%d %c", &caixa, &size);
    
    if(i > ctrl)
    {
        xicara = (capcafe * 2) / 7;
        printf("%d\n%d", capcafe, xicara);
    }
    else
    {
        if(size == 'P'|| size == 'p')
        {
            capcafe = capcafe + (10 * caixa);
        }
        if(size == 'G' || size == 'g')
        {
            capcafe = capcafe + (16 * caixa);
        }
        cafezao(capcafe, i+= 1, ctrl);
    }
}

int main() 
{
    cafezao(0, 0, 6);
    
	return 0;
}

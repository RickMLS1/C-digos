#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void alexmuralha(int n, int x, int y, int i, int moeda, char comp)
{
    char desloc;
    
    scanf("\n%c", &desloc);
    
    if(n == i)
    {
        printf("%d\n", moeda);
        return;
    }
    
    else
    {
        if(desloc == 'D')
        {
            x = x + 1;
        }
        if(desloc == 'C')
        {
            y = y + 1;
        }   
        if(x == y + 1 && ((desloc == 'D' && comp == 'D') || comp == 's'))
        {
            moeda++;
        }
        else if(y == x + 1 && ((desloc == 'C' && comp == 'C') || comp == 's'))
        {
            moeda++; 
        }
        alexmuralha(n, x, y, i += 1, moeda, desloc);
    }
}

int main()
{
    int n;
    
    scanf("%d\n", &n);
    
    alexmuralha(n, 0, 0, 0, -1, 's');
    
    return 0;
}

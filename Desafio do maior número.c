#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int biggest_number(int n, int i)
{
    scanf("%d", &n);
    
    if(n == 0)
    {
        printf("%d\n", i);
        return 0;     
    }
    else
    {
        if (n >= i)
        {
            i = n;
        }
        return biggest_number(n, i);
    }
}

int main() 
{
    biggest_number(0, 0);
	return 0;
}

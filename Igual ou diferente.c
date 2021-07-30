#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n1, n2, n3;
    
    scanf("%d\n %d\n %d\n", &n1, &n2, &n3);
    
    if((n1==n2) && (n2==n3))
    {
        printf("1");
    }
    else if((n1<n2) && (n2 < n3))
    {
        printf("2");
    }
    else
    {
        printf("3");   
    }
	return 0;
}

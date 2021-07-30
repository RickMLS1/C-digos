#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num, sucessor, antecessor;
    
    scanf("%d %d", &num);
    
    sucessor = num +1;
    antecessor = num -1;
    
    printf("%d %d", antecessor, sucessor);
    
	return 0;
}

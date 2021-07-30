#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int ID, IDs;
    
    scanf("%d %d", &ID, &IDs);
    
    IDs = ID*365*24*60*60;
    
    printf("%d", IDs);
    
	return 0;
}

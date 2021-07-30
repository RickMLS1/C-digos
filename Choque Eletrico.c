#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int L, P;
    
    scanf("%d", &L);
	
	if((L>=1) && (L<=20))
	{
	    P = 20 + (pow(L,3));
	    printf("Potencia de : %d W", P);
	}
	else if((L>=21) && (L<=40))
	{
	    P = 8000 + (pow(L-10,2));
	    printf("Potencia de : %d W", P);
	}
	else if((L>=41) && (L<=60)) 
	{
	    P = 9000 + (5*L);
	    printf("Potencia de : %d W", P);
	}
	else if((L>=61) && (L<=80))
	{
	    P = 9300 + (2*L);
	    printf("Potencia de : %d W", P);
	}
	else if((L>=81) && (L<=100))
	{
	    P = 9500 + L;
	    printf("Potencia de : %d W", P);
	}
	return 0;
}

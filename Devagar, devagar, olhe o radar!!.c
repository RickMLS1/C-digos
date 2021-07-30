#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double Vmax, Vvei;
    
    scanf("%lf\n %lf\n", &Vmax, &Vvei);
    
     if(Vvei == Vmax + (Vmax*0.20))
     {
       printf("85.13\n");
       printf("4\n");
     }
     if((Vvei > Vmax + (Vmax*0.20)) && (Vvei <= Vmax + (Vmax*0.50)))
     {
         printf("127.69\n");
         printf("5\n");
     }
     if(Vvei > Vmax + (Vmax*0.50))
     {
        printf("574.62\n");
        printf("7\n");
     }
     if(Vvei <= Vmax)
     {
        printf("0.00\n");
        printf("0\n");
     }
    return 0;
}

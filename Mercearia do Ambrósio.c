#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int cp, qc;
    double arr[4], n;
    arr[0] = 5.30;
    arr[1] = 6.00;
    arr[2] = 3.20;
    arr[3] = 2.50;
    
    scanf("%d\n %d", &cp, &qc);
    cp = cp - 1;
    n  = arr[cp];
    
    if(qc>=15.0 || n*qc>=40.0)
    {
        printf("R$ %.2lf", (n*qc)-(n*qc*0.15));
    }
    else{
        printf("R$ %.2lf", (n*qc));
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int n)
{
    int par, impar;
    
    if(n > 3) // inteiro maior que 3
    {
        par = n%2; // pega o resto da divis�o por 2
        impar = n%3; // pega o resto da divis�o por  
        
        if(par == 0) // resto do numero igual a 0, o numero � par
        {
            return 0; // para casos em que o par n�o � primo
        }
        else
        {
            if(impar == 0) // resto do numero igual a 0, o numero � impar
            {
                return 0; // para casos em que o impar n�o � primo
            }
            else // caso contr�rio 
            {
                return 1; // para casos em que � primo
            }
        }    
    }
    else if(n <= 1) // numero inteiro menor ou igual a 1
    {
        return 0; 
    }
    else // caso contr�rio 
    {
        return 1; 
    }
}   

int loop(int n)
{  
    int primo(int n); // chama a fun��o int primo(n)
    scanf("%d", &n); // l� um inteiro do teclado
    
    if (n != -1) // inteiro diferente de -1
    {
        printf("%d\n", primo(n)); 
        return loop(n); // enquanto for posto um numero diferente de -1, o programa ainda continua em execu��o
    }
    else // caso contrario
    {
        return 0;
    }
}

int main()
{
    int n; // declara n como inteiro
    int primo(int n); // chama a fun��o int primo
    int loop(int n); // chama a fun��o loop
    
    return loop(n);
}

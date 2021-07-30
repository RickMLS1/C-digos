#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo(int n)
{
    int par, impar;
    
    if(n > 3) // inteiro maior que 3
    {
        par = n%2; // pega o resto da divis?o por 2
        impar = n%3; // pega o resto da divis?o por  
        
        if(par == 0) // resto do numero igual a 0, o numero ? par
        {
            return 0; // para casos em que o par n?o ? primo
        }
        else
        {
            if(impar == 0) // resto do numero igual a 0, o numero ? impar
            {
                return 0; // para casos em que o impar n?o ? primo
            }
            else // caso contr?rio 
            {
                return 1; // para casos em que ? primo
            }
        }    
    }
    else if(n == 1) // numero inteiro menor ou igual a 1
    {
        return 1; 
    }
    else if(n < 1)
    {
        return 0;
    }
    else // caso contr?rio 
    {
        return 1; 
    }
    
}

int proximo_primo(int y)
{
    if(eh_primo(y) == 1)
    {
        return y;
    }
    else 
    {
        return proximo_primo(y + 1); 
    }
}

double fatorial(int z)
{
    if (z <= 1)
    {
        return 1;
    }
    else
    {
        return z*fatorial(z - 1);
    }
}

void loop(int ent, int rep, double resultado)
{
    int a = proximo_primo(ent);
    
    if(ent > rep)
    {
        printf("%.2lf", 0);
    }
    
    else if(ent < rep)
    {
        resultado = resultado + fatorial(ent) / a;
        
        printf("%d!/%d + ", ent, a);
        
        loop(ent + 1, rep, resultado);
    }
    
    else if(ent == rep)
    {
        resultado = resultado + fatorial(ent) / a;
        
        printf("%d!/%d\n", ent, a);
        
        printf("%.2lf", resultado);
    }
}

int main() 
{
    int rep;
    
    scanf("%d", &rep);
    
    loop(1, rep, 0);
    
	return 0;
}

#include <stdio.h>

int divisor(int n, int aux, int contador)
{
    if(n % aux == 0)
    {
        if(aux%3 == 0)
        {
            contador++;
        }
        
    }
    if(n == aux)
    {
        return contador;
    }
    
    return divisor(n, ++aux, contador);
}

int main() 
{
    int n, contador = 0, aux = 1, resultado;
    scanf("%d",&n);
    
    resultado = divisor(n, aux, contador);

    if(resultado > 0)
    {
      printf("%d\n", resultado);
    }
    else
    {
      printf("O numero nao possui divisores multiplos de 3!");
    }
    
    return 0;
}

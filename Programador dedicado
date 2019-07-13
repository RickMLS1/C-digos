#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void programador(contadorL, contadorProg, contadorD, auxDiaprodutivo, auxDDSemana)
{
    if(contadorD == 7) // Condi��o de parada
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",contadorProg);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n",contadorL);
    
        if(auxDDSemana == 0)
    
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
      
        if(auxDDSemana == 1)
    
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
      
        if(auxDDSemana == 2)
    
            printf("DIA QUE MAIS PRODUZIU: TERCA");
      
        if(auxDDSemana == 3)
    
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
      
        if(auxDDSemana == 4)
    
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
      
        if(auxDDSemana == 5)
    
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
      
        if(auxDDSemana == 6)
    
            printf("DIA QUE MAIS PRODUZIU: SABADO");
    }
    
    else
    {
        int programaA, linhaA;
    
        scanf("%d\n",&programaA);
        scanf("%d",&linhaA);

        if(programaA >= 5)
    
            contadorProg++;
      
        if(linhaA >= 100)
    
            contadorL++;
    
        int auxDiaprodutivoAtual = linhaA - 100;
    
        if(auxDiaprodutivoAtual > auxDiaprodutivo)
        {
            auxDiaprodutivo = auxDiaprodutivoAtual;
            auxDDSemana = contadorD;
        }
        programador(contadorL, contadorProg, ++contadorD, auxDiaprodutivo, auxDDSemana);
    }
}

int main() 
{
    programador(0, 0, 0, 0, 0);
    
    return 0;
}

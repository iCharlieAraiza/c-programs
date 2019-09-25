/** 
*Calcular el MCD usando el algoritmo de Euclides
*@author Carlos Araiza
**/

#include <stdio.h>

int main()
{
    int numero1, numero2, auxiliar;
    
    printf("Escribir el primer numero: ");
    scanf("%d",&numero1);
    
    printf("Escribir el segundo numero: ");
    scanf("%d", &numero2);
    
    while(numero2!=0){
        auxiliar=numero2;
        numero2= numero1%numero2;
        numero1= auxiliar;
    }

    printf("El MCD es: %d", numero1);
    
    return 0;
}

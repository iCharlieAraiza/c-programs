/**
* Todos los numeros primos que hay en n
**/

#include <stdio.h>

int main()
{
    int n, j=2, primo = 1;
    
    printf("Escribe un numero entero positivo: ");
    scanf("%d", &n);
    
    for(int i=2; i<=n; i++){
        
        while(j<i && primo==1){
            primo = i%j == 0 ? 0 : 1;
            j++;
        }

        if(primo==1){
            printf("%d\n", j);
        }else{
            primo=1; 
        }
        
        j=2;
    }
    
    
    return 0;
}
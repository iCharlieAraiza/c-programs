#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b, c;

    printf("Escribe el primer lado del triangulo: ");
    scanf("%f", &a);

    printf("Escribe el primer lado del triangulo: ");
    scanf("%f", &b);

    printf("Escribe el primer lado del triangulo: ");
    scanf("%f", &c);

    if(a+b>c && a+c> b && b+c> a){
        if(a==b && b==c){
            printf("Es un triangulo equilatero");
        }else if(a==b || a==c || b==c){
            printf("Es un triangulo iscosceles");
        }else{
            printf("Es un triangulo escaleno");
        }
    }else{
        printf("Ups! No es un triangulo valido");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int hours, minutes, seconds;
    
    
    printf("Ingresa las horas: ");
    scanf("%d", &hours);
    
    printf("Ingresa los minutos: ");
    scanf("%d", &minutes);
    
    printf("Ingresa los segundo: ");
    scanf("%d", &seconds);
    
    printf("El numero total de segundos es %d", seconds+minutes*60+hours*3600);
    
    return 0;
}

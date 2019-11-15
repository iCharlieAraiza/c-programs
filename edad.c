#include <stdio.h>

int main()
{
    int anno, mes, dia;
    
    do{
        printf("Escribe el año de nacimiento: \n");
        scanf("%d", &anno);
        
        if(anno<1900 || anno>2019)
            printf("\n*********\nUps! has agregado un valor no valido\n*********** \n\n");
    }while(anno<1900 || anno>2019);
    
    
    do{
        printf("Escribe el mes: \n");
        scanf("%d", &mes);
        
        if(mes<1 || mes>12)
            printf("\n*********\nUps! has agregado un valor no valido para el mes\n*********** \n\n");
    }while(mes<1 || mes>12);
    
    do{
        printf("Escribe el dia: \n");
        scanf("%d", &dia);
        
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
            dia = (dia<01|| dia >= 31 ) ? -1 : 31;
        }
        else if(mes==4 || mes==6 || mes==9 || mes==11){
            dia = (dia<1 || dia >= 30) ? -1 : 30;
        }
        else if(mes==2){
            dia = (dia<1 || dia >= 29) ? -1 : 29;
        }
        
        
        if(dia<1 || dia>31)
            printf("\n*********\nUps! has agregado un valor no valido\n*********** \n\n");
    }while(dia<1 || dia>31);
    
    printf("\nLa edad (aproximada) es: %d " , (mes >= 7 && dia> 11) ? 2019 - anno -1 : 2019 - anno );

    return 0;
}

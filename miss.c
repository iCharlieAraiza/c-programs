#include <stdio.h>

const int N = 10;

struct Miss{
    char id[10], nombre[40], apellido[40];
    float inteligencia, cultura, belleza, traje, general;
}concursantes[10];

void mensajeCategoria(int n);

int main()
{
    float cal = 0, inteligencia, cultura, belleza, traje, general=0, orden[4];
    int mayor=0, menor=0;

    for(int i = 0; i< N; i++){
        concursantes[i].general = 0;

        printf("%d Escribe el id: ", i+1);
        scanf("%s", concursantes[i].id);

        printf("%d Escribe el nombre: ", i+1);
        scanf("%s", concursantes[i].nombre);

        printf("%d Escribe el apellido: ", i+1);
        scanf("%s", concursantes[i].apellido);

        do{
            printf("%d Puntaje en inteligencia: ", i+1);
            scanf("%f", &concursantes[i].inteligencia);
            cal = concursantes[i].inteligencia;
        }while(cal<0 || cal>10);
        concursantes[i].general = concursantes[i].general + cal;

        do{
            printf("%d Puntaje en cultura: ", i+1);
            scanf("%f", &concursantes[i].cultura);
            cal = concursantes[i].cultura;
        }while(cal<0 || cal>10);
        concursantes[i].general = concursantes[i].general + cal;


        do{
            printf("%d Puntaje en belleza: ", i+1);
            scanf("%f", &concursantes[i].belleza);
            cal = concursantes[i].belleza;
        }while(cal<0 || cal>10);
        concursantes[i].general = concursantes[i].general + cal;


        do{
            printf("%d Puntaje en traje de banno: ", i+1);
            scanf("%f", &concursantes[i].traje);
            cal = concursantes[i].traje;
        }while(cal<0 || cal>10);
        concursantes[i].general = concursantes[i].general + cal;

        printf("\n");
    }


    for(int i = 0; i < N; i++){
        if(i==0){
            cal = concursantes[i].general;
        }

        cal = (concursantes[i].general > cal) ? concursantes[i].general : cal;

        general = general + concursantes[i].general;
        inteligencia = inteligencia + concursantes[i].inteligencia;
        cultura = cultura + concursantes[i].cultura;
        belleza = belleza + concursantes[i].belleza;
        traje = traje + concursantes[i].traje;

    }

    orden[0] = inteligencia;
    orden[1] = cultura;
    orden[2] = belleza;
    orden[3] = traje;

    printf("\n\nLa concursante con mayor puntaje es la del ID: ");

    for(int i = 0; i < N; i++){
        if(cal == concursantes[i].general){
            printf("%s\n", concursantes[i].id);
        }
    }

    //Acumulado  de cada uno de las categorías

    printf("\nPuntaje acumulado: \n%.2f\n", general);

    //El acumulado mayor y menor
/*
    for(int i =0; i<4; i++){
        printf("%d %f ", i+1, orden[i]);
    }
*/

    for(int i=0; i<4; i++){
        mayor = (orden[mayor]>= orden[i]) ? mayor : i;
        menor = (orden[menor]<= orden[i]) ? menor : i;
    }



    printf("\nEl puntaje acumulado mayor fue el de: ");
    mensajeCategoria(mayor);

    printf("\nEl puntaje acumulado menor fue el de: ");
    mensajeCategoria(menor);


    return 0;
}

void mensajeCategoria(int n){
    n = n +1;
    switch(n){
        case 1:
            printf("inteligencia");
            break;
        case 2:
            printf("cultura general");
            break;
        case 3:
            printf("belleza");
            break;
        case 4:
            printf("traje de banno");
            break;
        default:
            printf("Error");
    }
}



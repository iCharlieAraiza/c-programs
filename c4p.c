#include <stdio.h>

#define COL 10
#define FIL 10

int elementoValido(int array[FIL][COL], int pos);
void imprimir(int array[FIL][COL]);
int insertarValor(int array[FIL][COL], int pos, int jugador);

int pruebaHorizontal(int jugador, int posX, int posY, int array[FIL][COL]);
int pruebaVertical(int jugador, int posX, int posY, int array[FIL][COL]);

struct jugador{
    int x;
    int y;
}jugadores[2];

int main()
{
    int matriz[10][10] = {(0,0)}, turno=1, pos, valido;

    while(turno != 0){

        do{
            printf("Turno del jugador %d. Escribe una posición: ", turno);
            scanf("%d", &pos);

            valido = elementoValido(matriz, pos);

            if(valido==0){
                printf("Ups! Haz ingresado una posicion no valida. Vuelve a intentar \n");
            }

        }while( valido==0 );

        jugadores[turno-1].y = insertarValor(matriz, pos, turno);
        jugadores[turno-1].x = pos;

        imprimir(matriz);

        printf("\nJugador: %d Posicion: %d, %d \n", turno, jugadores[turno-1].y, jugadores[turno-1].x);
        printf("Match vertical: %d, Match Horizontal: %d \n\n", pruebaVertical(turno, pos, jugadores[turno-1].y, matriz), pruebaHorizontal(turno, pos, jugadores[turno-1].y, matriz));

        turno = (turno == 1) ? 2 : 1;

    }

    return 0;
}


/**
 * Imprimir la matriz
 * @param array
 */

void imprimir(int array[FIL][COL]){

    for(int i=FIL-1; i>=0; i--) {
        for(int j=0; j<COL; j++){
            char c = (array[i][j] == 0) ? '.' :  (array[i][j] == 1) ? 'X' : 'O';
            printf("| %c ", c);
            if(j==9)
                printf("|");
        }
        printf("\n");
    }

    //Imprimir pie de la tabla
    for(int i= 0; i<COL; i++){
        printf("____");
    }
    printf("_\n");
    for(int i= 0; i<COL; i++){
        printf("  %d ", i);
    }printf("\n");
}



/**
 * Comprobar si es un elemento válido
 * @param array
 * @param pos
 * @return
 */

int elementoValido (int array[FIL][COL], int pos){
    if(pos<0 || pos>9){
        return 0;
    }else{
        return (array[FIL-1][pos] == 0) ? 1 : 0;
    }
}


/**
 * Insertar algún elemento
 * @param array
 * @param pos
 * @param jugador
 * @return
 */

int insertarValor(int array[FIL][COL], int pos, int jugador){
    int s=1;
    int i;

    for(i=0; i<FIL && s==1; i++){
        if(array[i][pos] == 0){
            array[i][pos] = jugador;
            s=0;
        }
    }

    return i-1;
}



/**
*   Comprobar si gana/empata;
**/

//Horizontal

int pruebaHorizontal(int jugador, int posX, int posY, int array[FIL][COL]){
    int k=0, t=1, v=0;

    while(t==1){
        for(int i = posX; i>=0 && array[posY][i] == jugador; i--){
            k++;
        }

        for(int i = posX+1; i<COL && array[posY][i] == jugador; i++){
            k++;
        }
        t=0;
    }
    return k;
}

int pruebaVertical(int jugador, int posX, int posY, int array[FIL][COL]){
    int k=0, t=1, v=0;

    while(t==1){
        for(int i = posY; i>=0; i--){
            if(array[i][posX] == jugador){
                k++;
            }
        }
        t=0;
    }
    return k;
}

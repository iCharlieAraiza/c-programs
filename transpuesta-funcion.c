#include <stdio.h>

void imprimir(int F,  int C, int m[F][C]);
void transpuesta(int C,  int F, int m[F][C]);

int main()
{
    int F, C;

    printf("Escribe el numero de filas: ");
    scanf("%d", &F);

    printf("Escribe el numero de columnas: ");
    scanf("%d", &C);

    int m[F][C];

    for(int i = 0; i < F; i++){
        for(int j = 0; j < C; j++){
            printf("Escribe la posicion (%d,%d): ",i,j);
            scanf("%d", &m[i][j]);
        }
    }




    imprimir(F, C, m);

    transpuesta(F, C, m);

    return 0;
}


void imprimir(int F,  int C, int m[F][C]){
    for(int i=0; i<F; i++){
        for(int j=0; j<C; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void transpuesta(int F,  int C, int m[F][C]){
    int t[C][F], f,c;


    for(int i = 0; i<F; i++){
        for(int j = 0; j<C; j++){
            t[j][i] = m[i][j];
        }
    }

    printf("\n");


    for(int i=0; i<C; i++){
        for(int j=0; j<F; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }


}

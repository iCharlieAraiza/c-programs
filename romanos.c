#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0, s=1, cont=0;
    char nDString[6];
    char nUString[6];

    for(int i=0; i<6; i++){
        nDString[i] = ' ';
        nUString[i] = ' ';
    }

    printf("Agrega un numero del 1 al 99: ");
    scanf("%d", &n);

    switch ((n%100)/10)
    {
        case 1:
            nDString[0] = 'X';
            break;
        case 2:
            nDString[0] = 'X';
            nDString[1] = 'X';
            break;
        case 3:
            for(int i=0; i<3; i++){
                nDString[i] = 'X';
            }
            break;
        case 4:
            nDString[0] = 'X';
            nDString[1] = 'L';
            break;
        case 5:
            nDString[0] = 'L';
            break;
        case 6:
            nDString[0] = 'L';
            nDString[1] = 'X';
            break;
        case 7:
            nDString[0] = 'L';
            nDString[1] = 'X';
            nDString[2] = 'X';
            break;
        case 8:
            nDString[0] = 'L';
            for(int i=1; i<=3; i++){
                nDString[i] = 'X';
            }
            break;
        case 9:
            nDString[0] ='X';
            nDString[1] = 'C';
            break;
    }

    switch (n%10)
    {
        case 1:
            nUString[0] = 'I';
            break;
        case 2:
            nUString[0] = 'I';
            nUString[1] = 'I';
            break;
        case 3:
            for(int i = 0; i<3; i++){
                nUString[i] = 'I';
            }
            break;

        case 4:
            nUString[0] = 'I';
            nUString[1] = 'V';
            break;
        case 5:
            nUString[0] = 'V';
            break;
        case 6:
            nUString[0] = 'V';
            nUString[1] = 'I';
            break;
        case 7:
            nUString[0] = 'V';
            nUString[1] = 'I';
            nUString[2] = 'I';
            break;
        case 8:
            nUString[0] = 'V';
            for(int i = 1; i<=3; i++){
                nUString[i] = 'I';
            }
            break;
        case 9:
            nUString[0] = 'I';
            nUString[1] = 'X';
            break;
    }


    while(nDString[cont]!=' '){
        printf("%c", nDString[cont]);
        cont++;
    }

    cont = 0;

    while(nUString[cont]!=' '){
        printf("%c", nUString[cont]);
        cont++;
    }

    return 0;
}


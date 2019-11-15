#include <stdio.h>

void orden(int a, int b, int c);

const int N = 3;
int main()
{
    int a, b, c;

    printf("Escribe el primer numero: ");
    scanf("%d", &a);

    printf("Escribe el segundo numero: ");
    scanf("%d", &b);

    printf("Escribe el tercer numero: ");
    scanf("%d", &c);

    orden(a, b, c);

    return 0;
}

void orden(int a, int b, int c){
        int  ref, s = 0;
        while(s==0){
        s=1;

        if(a<b){
            ref = a;
            a=b;
            b = ref;
            s=0;
        }else if(b<c){
            ref = b;
            b = c;
            c = ref;
            s=0;
        }
    }

    printf("%d %d %d", a, b, c);
}


// codigo a completar

#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(void){

    int i;
    double vt[N], *p;

    p = vt;


    for(i = 0;i<N; i++)
        {
            *(vt + i)=1+rand()%100;
            printf("%f \n" , *(vt + i));
        }

}

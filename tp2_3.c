#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main(){

    int i,j;
    float mt[N][M];
    float *puntero_mt = &mt[0][0]; 

    for(i = 0;i<N; i++)
        {
            for(j = 0;j<M; j++)
                {
                    *(puntero_mt + i * M + j) = 1 + rand() % 100;

                    printf("%f \n", *(puntero_mt + i * M + j));
                }
            printf("\n");
        }


}

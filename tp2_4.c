#include <stdio.h>
#include <stdlib.h>

#define TAMA 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef PC;

void mostrarPC(PC computadoras[TAMA]);

void compuMasVieja(PC computadoras[TAMA]);

void compuMasVeloz(PC computadoras[TAMA]);

int main(void){

    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    PC computadoras[TAMA];
    
}

//Funcion para mostrar las PC.

void mostrarPC(PC computadoras[TAMA]){

    for (int i = 0; i < TAMA; i++)
    {
        printf("Velocidad: %d GHz \n", computadoras->velocidad);

        printf("Año: %d\n", computadoras->anio);

        printf("Cantidad de nucleos: %d\n", computadoras->cantidad);

        printf("Procesador: %s\n", computadoras->tipo_cpu);
    }
    
}

//Funcion para buscar la pc mas vieja.

void compuMasVieja(PC computadoras[TAMA]){

    int anio = 0;

    for (int i = 0; i < TAMA; i++)
    {
        if (anio < computadoras->anio)
        {
            anio = computadoras->anio;
        }
        
    }

    printf("La computadora mas vieja es del año: %d", anio);
    
}

//Funcion para la pc mas veloz.

void compuMasVeloz(PC computadoras[TAMA]){

    int velocidad = 0;

    for (int i = 0; i < TAMA; i++)
    {
        if (velocidad < computadoras->velocidad)
        {
            velocidad = computadoras->velocidad;
        }
        
    }

    printf("La computadora mas veloz es de %d GHz", velocidad);
}
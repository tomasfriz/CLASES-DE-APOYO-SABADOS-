#include "peliculas.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
/*
int buscarLibre(ePelicula lista[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(lista[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarPelicula(ePelicula lista[], int tam, int legajo)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( lista[i].legajo == legajo && lista[i].ocupado == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void cargarEstudio(eEstudio lista[], int tam)
{
    int i;
    i = buscarLibre(lista,tam);

    if(i != -1)
    {
        //printf("ingrese id: ");
        //scanf("%d", &lista[i].id);
        lista[i].id = mayorIdEstudio(lista, T) + 1;
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese pais: ");
        fflush(stdin);
        gets(lista[i].pais);
        printf("Ingrese anio creacion: ");
        scanf("%d", &lista[i].anioDeCreacion);
        lista[i].estado = OCUPADO;
    }
    else
    {
        printf("no hay espacio");
    }
}

*/


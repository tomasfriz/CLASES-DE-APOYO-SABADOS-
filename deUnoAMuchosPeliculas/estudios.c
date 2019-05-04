#include "estudios.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define OCUPADO 1
#define T 6

int buscarLibre(eEstudio lista[], int tam)
{
    int i;
    int indice = -1;

    for(i=0; i < tam; i++)
    {
        if(lista[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void mostrarEstudio(eEstudio unEstudio)
{
    printf("%d %10s %10s %d\n", unEstudio.id, unEstudio.nombre, unEstudio.pais, unEstudio.anioDeCreacion);
}

int mayorIdEstudio(eEstudio lista[], int tam)
{
    int i;
    int flag = 0;
    int aux = 0;
    for(i=0; i < tam; i++)
    {
        if(flag==0 || lista[i].id > aux)
        {
            aux = lista[i].id;
            flag = 1;
        }
    }
    return aux;

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
void borrarEstudio(eEstudio lista[], int tam, int id)
{
    int i;
    int loEncontro = 0;
    printf("ingrese la id a borrar: ");
    scanf("%d", %id);
    for(i = 0;i<tam;i++)
    {
        if(id == lista[i].id)
        {
            printf("")

        }
    }
}

void modificarEstudio(eEstudio lista[], int tam, int id)
{
    int i;
    int loEncontro = 0;
    printf("ingrese id a modificar: ");
    scanf("%d", &id);

    for(i = 0;i < tam;i++)
    {
        if(id == lista[i].id && lista[i].estado === OCUPADO)
        {
            printf("ingrese un nuevo nombre: ");
            fflush(stdin);
            gets();
        }
    }
}

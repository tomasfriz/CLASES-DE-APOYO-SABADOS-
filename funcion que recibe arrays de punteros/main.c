#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    long int dni;
    char nombre[31];
    eFecha fechaNac;
} ePersona;

int pedirDatosDeEstructuras(ePersona *lista,int tam);
void mostrarEstructurasDePuntero(ePersona *lista,int tam);
void mostrarUnaPersona(ePersona *lista, int tam);

int main()
{
    ePersona per[TAM], *ptrPer;
    ptrPer = per;

    pedirDatosDeEstructuras(ptrPer,TAM);

    printf("\n--------------------------------------------------\n");

    mostrarEstructurasDePuntero(per,TAM);

    return 0;
}

int pedirDatosDeEstructuras(ePersona *lista,int tam)
{
    int i;
    for(i = 0; i<tam; i++)
    {
        printf("DNI: ");
        scanf("%ld", &lista[i].dni);

        printf("\nNOMBRE: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", &lista[i].nombre);

        printf("\nDIA DE NACIMIENTO: ");
        scanf("%d", &lista[i].fechaNac.dia);

        printf("\nMES DE NACIMIENTO: ");
        scanf("%d", &lista[i].fechaNac.mes);

        printf("\nANIO DE NACIMIENTO: ");
        scanf("%d", &lista[i].fechaNac.anio);

        printf("%s - %ld - %d/%d/%d \n", lista[i].nombre, lista[i].dni, lista[i].fechaNac.dia, lista[i].fechaNac.mes, lista[i].fechaNac.anio);
    }

    return 1;
}
void mostrarEstructurasDePuntero(ePersona *lista, int tam)
{
    int i;
    for(i = 0; i<tam; i++)
    {
       mostrarUnaPersona(lista+i, tam);
    }
}

void mostrarUnaPersona(ePersona *lista, int tam)
{
    printf("%s - %ld - %d/%d/%d \n", lista->nombre, lista->dni, lista->fechaNac.dia, lista->fechaNac.mes, lista->fechaNac.anio);
}

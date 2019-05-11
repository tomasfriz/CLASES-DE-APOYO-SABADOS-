#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define TAM_LOCALIDAD 4
#define TAM_ALUMNO 4

typedef struct
{
    int id;
    char localidad[50];
}eLocalidad;

typedef struct
{
    int id;
    char nombre[20];
    int nota;
    char localidadAlumnos[50];
}eAlumno;

void harcodearLocalidades(eLocalidad list[]);
void harcodearAlumnos(eAlumno lista[]);
void mostrarListaLocalidad(eLocalidad list[], int tam);
void mostrarLocalidad(eLocalidad unaLocalidad);
void mostrarListaAlumno(eAlumno lista[], int tam);
void mostrarAlumno(eAlumno unAlumno);
void OrdenarLocalidades(eLocalidad list[], int tam);
void OrdenarAlumnos(eAlumno lista[], int tam);
int cantNotasMayores(eAlumno lista[], int tam);
int notaMayor(eAlumno lista[],int tam);
void notaMayorConNombre(eAlumno lista[],int tam);

int main()
{
    eLocalidad list[TAM_LOCALIDAD];
    eAlumno lista[TAM_ALUMNO];

    harcodearLocalidades(list);
    harcodearAlumnos(lista);

    OrdenarLocalidades(list,TAM_LOCALIDAD);
    mostrarListaLocalidad(list,TAM_LOCALIDAD);
    OrdenarAlumnos(lista,TAM_ALUMNO);
    mostrarListaAlumno(lista,TAM_ALUMNO);
    printf("\n--------------------------------------------\n");
    cantNotasMayores(lista,TAM_ALUMNO);
    printf("\n--------------------------------------------\n");
    notaMayor(lista,TAM_ALUMNO);
    printf("\n--------------------------------------------\n");
    notaMayorConNombre(lista,TAM_ALUMNO);

    return 0;
}

void harcodearLocalidades(eLocalidad list[])
{
    int i;
    int tam = 4;
    char localidad[][50]= {"avellaneda","lanus","moron","quilmes"};

    for(i=0; i<tam; i++)
    {
        list[i].id = i + 1;
        strcpy(list[i].localidad, localidad[i]);
    }

}
void harcodearAlumnos(eAlumno lista[])
{
    int i;
    int tam = 4;
    char nombres[][20]= {"maria","jose","pedro","ester"};
    int nota[]= {10,9,2,1};
    char localidadAlumnos[][50]= {"avellaneda","lanus","moron","quilmes"};

    for(i=0; i<tam; i++)
    {
        lista[i].id = i + 1;
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].nota = nota[i];
        strcpy(lista[i].localidadAlumnos, localidadAlumnos[i]);
    }
}
void mostrarListaLocalidad(eLocalidad list[], int tam)
{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        mostrarLocalidad(list[i]);
    }
    printf("------------------------------\n");
}
void mostrarLocalidad(eLocalidad unaLocalidad)
{
    printf("%d %15s \n", unaLocalidad.id, unaLocalidad.localidad);
}
void mostrarListaAlumno(eAlumno lista[], int tam)
{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        mostrarAlumno(lista[i]);
    }
    printf("------------------------------\n");
}
void mostrarAlumno(eAlumno unAlumno)
{
    printf("%d %10s %5d %15s\n", unAlumno.id, unAlumno.nombre, unAlumno.nota, unAlumno.localidadAlumnos);
}

void OrdenarLocalidades(eLocalidad list[], int tam)
{
    eLocalidad aux;
    int i;
    int j;
    for(i = 0;i < tam-1;i++)
    {
        for(j = i+1;j < tam;j++)
        {
            if(strcmp(list[i].localidad,list[j].localidad)>0)
            {
                aux = list[i];
                list[i] = list[j];
                list[j] = aux;
            }
        }
    }
}
void OrdenarAlumnos(eAlumno lista[], int tam)
{
    eAlumno aux;
    int i;
    int j;
    for(i = 0;i < tam-1;i++)
    {
        for(j = i+1;j < tam;j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}
int cantNotasMayores(eAlumno lista[], int tam)
{
    int cont = 0;
    int i;
    for(i = 0;i < tam;i++)
    {
        if(lista[i].nota > 5)
        {
            cont++;
        }
    }
    printf("la cantidad de notas mayor a 5 es: %d", cont);

    return cont;
}
int notaMayor(eAlumno lista[],int tam)
{
    int mayor=0;
    int i;
    for(i=0; i<tam; i++)
    {
        if (lista[i].nota > mayor)
        {
            mayor=lista[i].nota;
        }
    }
    printf("El mayor es %d\n", mayor);

    return 0;
}
void notaMayorConNombre(eAlumno lista[],int tam)
{

    int mayor = 0;
    char nombre[50];
    int i;
    for(i=0; i<tam; i++)
    {
        if (lista[i].nota > mayor)
        {
            mayor=lista[i].nota;
            strcpy(nombre,lista[i].nombre);
        }
    }
    printf("El mayor es %d y el nombre %s\n", mayor, nombre);
}

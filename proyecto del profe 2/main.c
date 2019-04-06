#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dameEdad(int *edad,char *mensaje);
int dameEdadDos(int *edad,char *mensaje);
int dameEdadTres(int *edad,char *mensaje);
int dameEdadConIntentos(int *edad,char *mensaje,int intentos);

int main()
{

    int laEdad;
    int seCargo;

    seCargo = dameEdadConIntentos(&laEdad,"\n que edad tienes? : ",3);

    /*
    do
    {
        seCargo = dameEdadTres(&laEdad,"\n que edad tienes? : ");
    }
    while(seCargo==0);
    */
    /*
    if (sePudo==1)
    {
        printf("la edad es: %d ",laEdad);
    }
    else
    {
        printf("no se pudo");
    }
    */
    return 0;
}
/** \brief pide la edad y la muestra por pantalla
 *
 * \param edad int* ingresamos la edad
 * \param mensaje char* muestra el mensaje para pedir la edad
 * \return int retorna 0 no se pudo y 1 si se pudo , y lo muestra por pantalla
 *
 */
int dameEdad(int *edad,char *mensaje)
{
    int sePudo = 0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d",&aux);
    if(sePudo==1)
    {
        *edad=aux;

    }
    return sePudo;
}

int dameEdadDos(int *edad,char *mensaje)
{
    char cadenaCargada[20];
    int sePudo = 1;
    printf(mensaje);
    scanf("%s",cadenaCargada);
    *edad = atoi(cadenaCargada);

    return sePudo;
}
int dameEdadTres(int *edad,char *mensaje)
{
    char cadenaIngresada[20];
    int seCargo = 1;
    int i;
    printf(mensaje);
    fflush(stdin);
    scanf("%[^\n]",cadenaIngresada);
    for(i = 0; i < strlen(cadenaIngresada); i++)
    {
        if(cadenaIngresada[i] < '0'||cadenaIngresada[i] > '9'&&cadenaIngresada[i] != "\0")
        {
            seCargo=0;
        }
    }
    if(seCargo == 1)
    {
        *edad = atoi(cadenaIngresada);
    }
    return seCargo;

}
int dameEdadConIntentos(int *edad,char *mensaje,int intentos)
{
    int i;
    int cont=0;
    do
    {
        seCargo = dameEdadTres(edad,mensaje);
        cont++;
    }
    while(seCargo==0&&cont<3);
    return flag;
}


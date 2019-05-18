#include <stdio.h>
#include <stdlib.h>

void mostrarPunteroInt(int *puntero);
int pedirPunteroInt(int *puntero);

int main()
{
    int num;
    int *punteroInt = &num;

    pedirPunteroInt(punteroInt);
    mostrarPunteroInt(punteroInt);

    return 0;
}
int pedirPunteroInt(int *puntero)
{
    printf("ingrese un numero: ");
    scanf("%d", puntero);
    return 1;
}

void mostrarPunteroInt(int *puntero)
{
    printf("el resultado del puntero es: %d ", *puntero);
}

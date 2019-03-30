#include <stdio.h>
#include <stdlib.h>

void verSiAnda(void)
{
    printf("funciona");
}

int cambiarValor(int dato)
{
    dato = 0;
    printf("\n lugar valor %d", &dato);
}

int cambiarReferencia(int *dato)
{
   *dato = 0;
printf("\n lugar referencia %d", &*dato);
}

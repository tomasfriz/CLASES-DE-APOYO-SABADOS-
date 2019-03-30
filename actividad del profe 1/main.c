#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    verSiAnda();
    int sueldo;
    printf("\n lugar sueldo %d", &sueldo);
    sueldo = 10000;
    cambiarValor(sueldo);
    printf("\n por valor: %d", sueldo);
    cambiarReferencia(&sueldo);
    printf("\n por referencia: %d", sueldo);

    return 0;
}

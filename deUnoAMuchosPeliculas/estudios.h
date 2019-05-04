#ifndef ESTUDIOS_H_INCLUDED
#define ESTUDIOS_H_INCLUDED

typedef struct
{
    int id;
    int estado; /// 0 esta libre y 1 esta ocupado
    //int isEmpty /// 1 esta libre y 0 esta ocupado
    char nombre[50];
    char pais[50];

    int anioDeCreacion;

} eEstudio;

#endif // ESTUDIOS_H_INCLUDED

#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id;
    int estado; /// 0 esta libre y 1 esta ocupado
    char titulo[50];
    char director[50];
    int idEstudio;
    float duracion;
    int anioDeEstreno;

} ePelicula;

#endif // PELICULAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Materia.h"

struct Materia{
    int id;
    char nombre[30];
    int cupo;
    Lista* inscriptos;
};

Materia* crearMateria(int id, char nombre[30], int cupo){
    Materia* m = (Materia*)malloc(sizeof(Materia));

    m->id = id;
    strcpy(m->nombre, nombre);
    m->cupo = cupo;
    m->inscriptos = crearLista();

    return m;
}

int getIdMateria(Materia* m){
    return m->id;
}

const char* getNombreMateria(Materia* m){
    return m->nombre;
}

int getCupoMateria(Materia* m){
    return m->cupo;
}

const Lista* getListaInscriptos(Materia* m){
    return m->inscriptos;
}

void setNombreMateria(Materia* m, char nombre[30]){
    strcpy(m->nombre, nombre);
}

void destruirMateria(Materia* m);

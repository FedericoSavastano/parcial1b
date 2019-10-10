#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"
#include "referi.h"
#include "partido.h"
#include "funciones.h"
#include "validaciones.h"

#define CANTIDAD_EQUIPOS 3
#define CANTIDAD_JUGADORES 3
#define CANTIDAD_REFERIES 3
#define CANTIDAD_PARTIDOS 3

#define TRUE 0
#define FALSE 1

int agregarEquipo (eEquipo* listaequipo, int cantidad, int codigo, char nombre[],char localidad[], int lugarVacio)
{

   if(list!=NULL && cantidad==CANTIDAD_EQUIPOS)
    {

       strcpy( listaequipo[lugarVacio].nombre , nombre );
       strcpy( listaequipo[lugarVacio].localidad, localidad );


       listaequipo[lugarVacio].estaVacio=FALSE;

     return 0;
    }


    return -1;

}

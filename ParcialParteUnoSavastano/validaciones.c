#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"
#include "referi.h"
#include "partido.h"
#include "funciones.h"

#define CANTIDAD_EQUIPOS 3
#define CANTIDAD_JUGADORES 3
#define CANTIDAD_REFERIES 3
#define CANTIDAD_PARTIDOS 3

#define TRUE 0
#define FALSE 1



/**aca pongo el menu y todo eso*/




/** \brief Inicializa la lista de Equipos, poniendole el casillero de estaVacio en True (1),
 *
 * \param eEquipo* listaDeEquipos puntero al array de equipos
 * \param cantidadEquipos int tamaño del array
 * \return int Return (-1) si da error [tamaño invalido o puntero NULL] - (0) si esta Ok
 *
 */
int inicializarEquipos (eEquipo* listaDeEquipos, int cantidadEquipos)
{
    int returnInit;

    if(listaDeEquipos!=NULL && cantidadEquipos==CANTIDAD_EQUIPOS)
    {
        int i;
        for(i=0;i<cantidadEquipos;i++)
        {
            listaDeEquipos[i].estaVacio=TRUE;
            returnInit = 0;
        }

    }else{
        returnInit = -1;
    }

    return returnInit;
}



int encontrarLugarVacio (eEquipo* listaDeEquipos, int cantidadEquipos)
{
    int i;
    int lugarVacioValido=0;
    int indiceEncontrado;

    for(i=0;i<cantidadEquipos;i++)
    {
        if(listaDeEquipos[i].estaVacio==0)
        {
            indiceEncontrado=i;
            lugarVacioValido=1;
            break;
        }else if(listaDeEquipos[i].estaVacio== '\0' && lugarVacioValido==0)
        {
            indiceEncontrado=-1;
        }

    }

    return indiceEncontrado;
}



void mostrarMenu(eEquipo listaDeEquipos[], int cantidadEquipos, eJugador listaDeJugadores[], int cantidadJugadores, eReferi listaDeReferis[], int cantidadReferis, ePartido listaPartidos[], int cantidadPartidos)
{
    int acumuladorCodigoEquipo=0;
    int validarInicializar;

    validarInicializar=inicializarEquipos(listaDeEquipos,cantidadEquipos);

    if(validarInicializar==0)
    {

    }





}


void imprimirMenu();
{
    printf("\n");
    printf("Equipos\n");
    printf("   A . Altas \n B. Listar\n");
    printf("\n");
    printf("Jugadores\n");
    printf("   C . Altas \n D. Listar\n");
    printf("\n");
    printf("Referi\n");
    printf("   E . Altas \n");
    printf("\n");
    printf("Partidos\n");
    printf("   F . Altas \n G. Listar\n");

}

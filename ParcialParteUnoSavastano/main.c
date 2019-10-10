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

int main()
{
    eEquipo listaDeEquipos[CANTIDAD_EQUIPOS];
    eJugador listaDeJugadores[CANTIDAD_JUGADORES];
    eReferi listaDeReferis[CANTIDAD_REFERIES];
    ePartido listaDePartidos[CANTIDAD_PARTIDOS];

    mostrarMenu(eEquipo listaDeEquipos, CANTIDAD_EQUIPOS, listaDeJugadores, CANTIDAD_JUGADORES, listaDeReferis, CANTIDAD_REFERIES, listaDePartidos, CANTIDAD_PARTIDOS);

    imprimirMenu();
    return 0;
}

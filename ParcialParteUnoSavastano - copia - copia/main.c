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


    int acumuladorCodigoEquipo=0;
    int validarInicializar;
    char opcion;
    char opcion2;
    int lugarVacioValido;

    validarInicializar=inicializarEquipos(listaDeEquipos,CANTIDAD_EQUIPOS);

    if(validarInicializar==0)
    {
        imprimirMenu();
        opcion=getchar();
        while(opcion!='h' || opcion!='H')
        {

        switch(opcion)
        {
            case 'a':
            case 'A':
                lugarVacioValido=encontrarLugarVacio(listaDeEquipos,CANTIDAD_EQUIPOS);
                if(lugarVacioValido>-1)
                  {

                    opcion2=getChar("\n Desea agregar un equipo? s/n \n");
                    if(opcion2=='s' || opcion2=='S')
                        {
                            printf("Bueno ahora agregamos un equipo ahi va");

                          }
                    else{
                            printf("Ok salimos");
                            break;
                          }
                    }//if(lugarVacioValido>-1)



                printf("Entreaste al A");
                break;

        }//switch(opcion)
    }//if(validarInicializar==0)


    imprimirMenu();
        opcion=getchar();
}//while(opcion!='h' || opcion!='H')

    return 0;
}

#define MAX_NOMBRE_EQUIPO 51
#define MAX_LOCALIDAD_EQUIPO 33
#define TRUE 0
#define FALSE 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"
#include "referi.h"
#include "partido.h"
#include "funciones.h"



typedef struct{
    int codigoEquipo;
    char nombre[MAX_NOMBRE_EQUIPO];
    char localidad[MAX_LOCALIDAD_EQUIPO];
    int estaVacio;  /**CERO PARA CIERTO, 1 PARA FALSO*/


}eEquipo;

typedef struct{
    int dia;
    int mes;
    int anio;

}eFecha;


int agregarEquipo (eEquipo* listaequipo, int cantidad, int codigo, char nombre[],char localidad[], int lugarVacio);


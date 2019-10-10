#define MAX_NOMBRE_JUGADOR 31
#define MAX_APELLIDO_JUGADOR 31
#include "equipos.h"
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
    int codigoJugador;
    char apellido[MAX_APELLIDO_JUGADOR];
    char nombre[MAX_NOMBRE_JUGADOR];
    eEquipo codigoDeEquipo;
    char sexo;
    eFecha fechaNacimiento;


}eJugador;

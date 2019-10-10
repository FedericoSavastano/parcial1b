#define MAX_APELLIDO_REFERI 31
#define MAX_NOMBRE_REFERI 31
#define MAX_EMAIL_REFERI 40

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipos.h"
#include "jugadores.h"
#include "referi.h"
#include "partido.h"
#include "funciones.h"


typedef struct{
    int codigoReferi;
    char apellido[MAX_APELLIDO_REFERI];
    char nombre[MAX_NOMBRE_REFERI];
    char sexo;
    char email[MAX_EMAIL_REFERI];
    eFecha fechaNacimiento;

}eReferi;

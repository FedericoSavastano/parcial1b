#define MAX_NOMBRE_JUGADOR 31
#define MAX_APELLIDO_JUGADOR 31
#define TRUE 0
#define FALSE 1


typedef struct{
    int dia;
    int mes;
    int anio;

}eFechaJugador;



typedef struct{
    int codigoJugador;
    char apellido[MAX_APELLIDO_JUGADOR];
    char nombre[MAX_NOMBRE_JUGADOR];
    eEquipo codigoDeEquipo;
    char sexo;
    eFechaJugador fechaNacimiento;


}eJugador;



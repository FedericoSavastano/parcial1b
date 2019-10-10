#define MAX_APELLIDO_REFERI 31
#define MAX_NOMBRE_REFERI 31
#define MAX_EMAIL_REFERI 40

typedef struct{
    int dia;
    int mes;
    int anio;

}eFechaReferi;


typedef struct{
    int codigoReferi;
    char apellido[MAX_APELLIDO_REFERI];
    char nombre[MAX_NOMBRE_REFERI];
    char sexo;
    char email[MAX_EMAIL_REFERI];
    eFechaReferi fechaNacimiento;

}eReferi;



//#endif "fecha.h"

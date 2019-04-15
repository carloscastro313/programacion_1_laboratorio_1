typedef struct
{
    int legajo;
    char sexo;
    char nombre[50];
    float sueldoNeto;
    float sueldoBruto;

}eEmpleado;

void seleccionarEmpleado(eEmpleado[], int);
int pedirEntero(char texto[]);
int buscarLegajo(eEmpleado[], int, int);

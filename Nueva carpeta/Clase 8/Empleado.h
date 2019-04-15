typedef struct
{
    int legajo;
    char sexo;
    char nombre[50];
    float sueldoNeto;
    float sueldoBruto;
    int estado;

}eEmpleado;

void inicializarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado[], int);
void crearEmpleado(eEmpleado[], int);
void seleccionarEmpleado(eEmpleado[], int);
int pedirEntero(char texto[]);
int buscarLegajo(eEmpleado[], int, int);

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
int buscarLibre(eEmpleado[], int);
void crearEmpleado(eEmpleado[], int);
void mostrarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado[], int);
int pedirEntero(char texto[]);
int buscarUno(eEmpleado[], int, int);
int borrarUno(eEmpleado[], int, int);

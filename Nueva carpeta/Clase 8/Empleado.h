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
char opciones(char[]);
int buscarLibre(eEmpleado[], int);
void crearEmpleado(eEmpleado[], int);
void mostrarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado[], int);
void desplegarDatos(eEmpleado);
void buscarModificarSueldo(eEmpleado[], int);
void bajaEmpleado(eEmpleado[], int);
int pedirEntero(char texto[]);
int buscarUno(eEmpleado[], int, int);
float modificarSueldo(eEmpleado);
void informeEmpleado(eEmpleado[], int);
eEmpleado buscarMaximo(eEmpleado[], int);
int buscarCarlos(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);

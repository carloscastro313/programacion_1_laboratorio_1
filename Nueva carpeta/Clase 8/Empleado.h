typedef struct
{
    int idSector;
    char descripcion[20];
    int dineroHora;

}eSector;

typedef struct
{
    int legajo;
    char sexo;
    char nombre[50];
    float sueldoNeto;
    float sueldoBruto;
    int estado;
    int horasTrabajadas;
    int idSector;

}eEmpleado;

void inicializarEmpleados(eEmpleado[], int);
char opciones(char[]);
int buscarLibre(eEmpleado[], int);
void crearEmpleado(eEmpleado[], eSector[], int);
void mostrarEmpleados(eEmpleado[], eSector[], int);
void mostrarEmpleado(eEmpleado[], eSector[], int);
void desplegarDatos(eEmpleado, eSector[]);
void buscarModificarSueldo(eEmpleado[], eSector[], int);
void bajaEmpleado(eEmpleado[], int);
int pedirEntero(char texto[]);
int buscarUno(eEmpleado[], int, int);
float modificarSueldo(eEmpleado, eSector[]);
void informeEmpleado(eEmpleado[], eSector[], int);
eEmpleado buscarMaximo(eEmpleado[], int);
int buscarCarlos(eEmpleado[], int);


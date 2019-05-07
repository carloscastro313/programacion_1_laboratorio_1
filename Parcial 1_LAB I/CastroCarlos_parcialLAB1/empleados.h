typedef struct
{
    int id;
    char actorName[51];
    char origen[51];

}eActores;

typedef struct
{
    int id;
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int id;
    char genero[21];

}eGenero;


typedef struct
{
    int id;
    int idActor;
    int idGenero;
    char name[51];
    int isEmpty;

}ePelicula;

void initEmployees(ePelicula[], int);
char opciones(char[]);


int crearEmpleado(ePelicula[], eFecha[], int, int);
int buscarLibre(ePelicula[], int);
void hardcodearDatosEmpleados(ePelicula[], eFecha[], int);

void modificarEmpleado(ePelicula[], eFecha[], int, int);
int findEmployeeById(ePelicula[], int, int);
void opcionesCambio(ePelicula[], eFecha[], int, char);

int bajaEmpleado(ePelicula[], int, int);
int removePelicula(ePelicula[], int, int);


void ingresoPalabra(char[], char[]);
void correctorPalabras(char[]);
int ingresoNumero(char[]);

void mostrarEmpleados(ePelicula[], eFecha[], eActores[], eGenero[], int, int);
void ordenaVector(ePelicula[], eFecha[], int);
void ordenamiento(ePelicula[], eFecha[], int, int);

void cargarDatos(ePelicula[], eFecha[], eActores[], eGenero[], int);
void desplegarDatos(ePelicula, eFecha, eActores[], eGenero[]);

void cargarDatosActores(eActores[]);


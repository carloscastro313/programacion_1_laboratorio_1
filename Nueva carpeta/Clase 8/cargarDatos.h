typedef struct
{
    int legajo;
    char sexo;
    char nombre[50];
    float sueldoNeto;
    float sueldoBruto;

}eEmpleado;


void mostrarEmpleado(eEmpleado[], int);
void crearEmpleado(eEmpleado[], int);


typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;
}eEmpleado;

eEmpleado* constructorFantasma();
int set_Legajo(eEmpleado*, int);
int get_legajo(eEmpleado*);

void delete_empleado(eEmpleado*);

typedef struct//declarar estructura
{
    //declarar variable de la estructura
    int legajo;
    char nombre[50];
    float promedio;
    char direccion[20];
}eAlumno;//nombre de la estructura(variable)

void mostrarAlumno(eAlumno);
void cargarListado(eAlumno[], int);
eAlumno cargarAlumno();

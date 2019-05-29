#include "Employee.h"
#include <string.h>
int employee_compareByName(Employee *e1, Employee *e2)
{
    return strcmp(e1->nombre,e2->nombre);
}


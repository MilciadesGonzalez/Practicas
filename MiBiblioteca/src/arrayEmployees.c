/*
 * arrayEmployees.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "arrayEmployees.h"

/** \brief Funcion para generar un nuevo ID de Sectores.
 *
 * \param void No requiere parametros.
 * \return int
 *      Nuevo ID incremental para cada Sector.
 *
 */
static int getNewSectorId(void);

/** \brief Funcion que imprime un Empleado formateado para impresion
 *      sin encabezado de tabla.
 *
 * \param employee sEmployee Tipo de Dato de Empleado.
 * \param list[] sSector Direccion de memoria del inicio del array de Sectores.
 * \param length int Longitud del array.
 * \return int
 *      [-1] Si no se pudo imprimir el Empleado.
 *      [0] Si el Empleado fue impreso con exito.
 *
 */
static int printEmployeeWithoutHeader(sEmployee employee, sSector list[], int length);

/** \brief Funcion que imprime un Sector formateado para impresion
 *      sin encabezado de tabla.
 *
 * \param sector sSector Tipo de Dato de Sector.
 * \return void No retorna valores.
 *
 */
static void printSectorWithoutHeader(sSector sector);

int initEmployees(sEmployee list[], int length)
{
    int returnValue = -1;
    int i = 0;

    if(list != NULL && length > 0 && length <= EMPLOYEE_MAX)
    {
        for( ; i < length; i++)
        {
            list[i].isEmpty = TRUE;
        }

        if(i == length)
        {
            returnValue = 0;
        }
    }

    return returnValue;
}

int getNewEmployeeId(void)
{
    static int idEmployee = ID_INIT_EMPLOYEE;
    idEmployee++;
    return idEmployee;
}

static int getNewSectorId(void)
{
    static int idSector = ID_INIT_SECTOR;
    idSector++;
    return idSector;
}

int compareEmployees(sEmployee employee1, sEmployee employee2)
{
    int compare = -2;

    /**< Si sus ID son iguales, como no pueden repetirse se toman como Empleados iguales. >*/
    if(employee1.id == employee2.id)
    {
        compare = 0;
    }
    else
    {
        /**< Si el ID del primero es menor al ID del segundo, son diferentes y el ID 1 es menor. >*/
        if(employee1.id < employee2.id)
        {
            compare = 1;
        }
        else
        {
            /**< Si el ID del primero es mayor al ID del segundo, son diferentes y el ID 2 es menor. >*/
            if(employee1.id > employee2.id)
            {
                compare = -1;
            }
        }
    }

    return compare;
}

int swapEmployees(sEmployee* employee1, sEmployee* employee2)
{
    int returnValue = -1;
    sEmployee aux1;
    sEmployee aux2;

    aux1 = *employee1;
    aux2 = *employee2;
    *employee1 = *employee2;
    *employee2 = aux1;

    if(!compareEmployees(*employee1, aux2) && !compareEmployees(*employee2, aux1))
    {
        returnValue = 0;
    }

    return returnValue;
}

int getEmptyIndexOfEmployees(sEmployee list[], int length)
{
    int returnValue = -1;

    if(list != NULL && length > 0 && length <= EMPLOYEE_MAX)
    {
        for (int i = 0; i < length; i++)
        {
            if(list[i].isEmpty == TRUE)
            {
                returnValue = i;
                break;
            }
        }
    }

    return returnValue;
}

int findEmployeeById(sEmployee list[], int length, int id)
{
    int returnValue = -1;

    if(list != NULL && length > 0 && length <= EMPLOYEE_MAX)
    {
        for (int i = 0; i < length; i++)
        {
            if(list[i].id == id)
            {
                returnValue = i;
                break;
            }
        }
    }

    return returnValue;
}

int findSectorById(sSector list[], int length, int id)
{
    int returnValue = -1;

    if(list != NULL && length > 0 && length <= SECTOR_MAX)
    {
        for (int i = 0; i < length; i++)
        {
            if(list[i].idSector == id)
            {
                returnValue = i;
                break;
            }
        }
    }

    return returnValue;
}

int findSectorNameById(char* sectorName, sSector list[], int length, int idSector)
{
    int returnValue = -1;

    if(list != NULL && length > 0 && length <= SECTOR_MAX)
    {
        for(int i = 0; i < length; i++)
        {
            if(list[i].idSector == idSector)
            {
                strcpy(sectorName, list[i].name);
                returnValue = 0;
                break;
            }
        }
    }

    return returnValue;
}

int selectEmployee(char message[], char eMessage[], sEmployee listEmployees[], int lengthEmployees, sSector listSectors[], int lengthSectors)
{
    int returnValue = -1;
    int auxId = 0;
    int auxIndex = 0;

    if(message != NULL && eMessage != NULL && listEmployees != NULL && listSectors != NULL
        && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX && lengthSectors > 0 && lengthSectors <= SECTOR_MAX
        && printEmployees(listEmployees, lengthEmployees, listSectors, lengthSectors) > 0
        && !inputs_getInt(&auxId, message, eMessage, ID_INIT_EMPLOYEE + 1, ID_INIT_EMPLOYEE + lengthEmployees))
    {
        auxIndex = findEmployeeById(listEmployees, lengthEmployees, auxId);

        if(auxIndex != -1)
        {
            returnValue = auxId;
        }
        else
        {
            printf("No se encuentra el ID del Empleado en el sistema.\n");
        }
    }

    return returnValue;
}

int selectSector(char message[], char eMessage[], sSector listSectors[], int lengthSectors)
{
    int returnValue = -1;
    int auxId = 0;
    int auxIndex = 0;

    if(message != NULL && eMessage != NULL && listSectors != NULL
        && lengthSectors > 0 && lengthSectors <= SECTOR_MAX
        && printSectors(listSectors, lengthSectors) > 0
        && !inputs_getInt(&auxId, message, eMessage, ID_INIT_SECTOR + 1, ID_INIT_SECTOR + lengthSectors))
    {
        auxIndex = findSectorById(listSectors, lengthSectors, auxId);

        if(auxIndex != -1)
        {
            returnValue = auxId;
        }
        else
        {
            printf("No se encuentra el ID del Sector en el sistema.\n");
        }
    }

    return returnValue;
}

int addEmployee(sEmployee list[], int length, int id, char name[], char lastName[], float salary, int sector)
{
    int returnValue = -1;
    int emptyIndex;

    if(list != NULL && length > 0 && length <= EMPLOYEE_MAX
        && name != NULL && lastName != NULL)
    {
        if(findEmployeeById(list, length, id) != -1)
        {
            printf("El ID ingresado ya esta en uso.\n");
        }
        else
        {
            emptyIndex = getEmptyIndexOfEmployees(list, length);

            if(emptyIndex != -1)
            {
                list[emptyIndex].id = id;
                strcpy(list[emptyIndex].name, name);
                strcpy(list[emptyIndex].lastName, lastName);
                list[emptyIndex].salary = salary;
                list[emptyIndex].idSector = sector;
                list[emptyIndex].isEmpty = FALSE;

                returnValue = 0;
            }
        }
    }

    return returnValue;
}

int removeEmployee(sEmployee listEmployees[], int lengthEmployees, sSector listSectors[], int lengthSectors, int id)
{
    int returnValue = -1;
    int employeeIndex;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX
        && listSectors != NULL && lengthSectors > 0 && lengthSectors <= SECTOR_MAX)
    {
        employeeIndex = findEmployeeById(listEmployees, lengthEmployees, id);
        if(employeeIndex == -1)
        {
            printf("No se encuentra el ID del Empleado en el sistema.\n");
        }
        else
        {
            inputs_clearScreen();
            printf("ATENCION! ESTA A PUNTO DE DAR DE BAJA AL SIGUIENTE EMPLEADO:\n");
            printEmployee(listEmployees[employeeIndex], listSectors, lengthSectors);
            if(inputs_userResponse("ESTA DE ACUERDO? [S] [N]: "))
            {
                listEmployees[employeeIndex].isEmpty = TRUE;
                returnValue = 0;
            }
        }

    }

    return returnValue;
}

int sortEmployees(sEmployee listEmployees[], int lengthEmployees, sSector listSectors[], int lengthSectors, int order)
{
    int returnValue = -1;
    int indexSector1;
    int indexSector2;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX
        && listSectors != NULL && listSectors > 0 && lengthSectors <= SECTOR_MAX
        && (order == ASC || order == DESC))
    {
        for(int i= 0; i < lengthEmployees-1 ; i++)
        {
            for(int j = i+1; j < lengthEmployees; j++)
            {
                if((strcmp(arrays_stringToCamelCase(listEmployees[i].lastName, EMPLOYEE_LASTNAME_MAX),
                        arrays_stringToCamelCase(listEmployees[j].lastName, EMPLOYEE_LASTNAME_MAX)) > 0 && order == ASC)
                    || ((strcmp(arrays_stringToCamelCase(listEmployees[i].lastName, EMPLOYEE_LASTNAME_MAX),
                        arrays_stringToCamelCase(listEmployees[j].lastName, EMPLOYEE_LASTNAME_MAX)) < 0 && order == DESC)))
                {
                    if(!swapEmployees(&listEmployees[i], &listEmployees[j]))
                    {
                        returnValue = 0;
                    }
                }
                else
                {
                    if(strcmp(listEmployees[i].lastName, listEmployees[j].lastName) == 0)
                    {
                        indexSector1 = findSectorById(listSectors, lengthSectors, listEmployees[i].idSector);
                        indexSector2 = findSectorById(listSectors, lengthSectors, listEmployees[j].idSector);

                        if(indexSector1 != -1 && indexSector2 != -1)
                        {
                            if((strcmp(arrays_stringToCamelCase(listSectors[indexSector1].name, SECTOR_NAME_MAX),
                                    arrays_stringToCamelCase(listSectors[indexSector2].name, SECTOR_NAME_MAX)) > 0 && order == ASC)
                                || (strcmp(arrays_stringToCamelCase(listSectors[indexSector1].name, SECTOR_NAME_MAX),
                                    arrays_stringToCamelCase(listSectors[indexSector2].name, SECTOR_NAME_MAX)) < 0 && order == DESC))
                            {
                                if(!swapEmployees(&listEmployees[i], &listEmployees[j]))
                                {
                                    returnValue = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return returnValue;
}

int currentEmployeeCounter(sEmployee listEmployees[], int lengthEmployees)
{
    int counter = 0;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX)
    {
        for (int i = 0; i < lengthEmployees; i++)
        {
            if(listEmployees[i].isEmpty == FALSE)
            {
                counter++;
            }
        }
    }

    return counter;
}

float sumEmployeeSalaries(sEmployee listEmployees[], int lengthEmployees)
{
    float total = 0.0;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX)
    {
        for (int i = 0; i < lengthEmployees; i++)
        {
            if(listEmployees[i].isEmpty == FALSE
                && listEmployees[i].salary > 0)
            {
                total += listEmployees[i].salary;
            }
        }
    }

    return total;
}

int employeesFilterAboveValue(sEmployee listEmployees[], sEmployee filteredEmployeeList[], int lengthEmployees, float value)
{
    int counter = 0;
    int filteredIndex = 0;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX && value > 0)
    {
        for (int i = 0; i < lengthEmployees; i++)
        {
            if(listEmployees[i].isEmpty == FALSE
                && listEmployees[i].salary > value)
            {
                filteredEmployeeList[filteredIndex] = listEmployees[i];
                filteredIndex++;
                counter++;
            }
        }
    }

    return counter;
}

int printEmployee(sEmployee employee, sSector list[], int length)
{
    int returnValue = -1;

    if(list != NULL && length > 0 && length <= SECTOR_MAX
        && employee.isEmpty == FALSE)
    {
        printf("+======+===============+===============+=============+============================+\n");
        printf("|  ID  |    Nombre     |   Apellido    |   Salario   |           Sector           |\n");
        printf("+======+===============+===============+=============+============================+\n");
        printEmployeeWithoutHeader(employee, list, length);
        printf("+------+---------------+---------------+-------------+----------------------------+\n");

        returnValue = 0;
    }

    return returnValue;
}

void printSector(sSector sector)
{
    printf("+======+============================+\n");
    printf("|  ID  |           Sector           |\n");
    printf("+======+============================+\n");
    printSectorWithoutHeader(sector);
    printf("+------+----------------------------+\n");
}

int printEmployees(sEmployee listEmployees[], int lengthEmployees, sSector listSectors[], int lengthSectors)
{
    int itemsCounter = 0;
    int flagEmployees = 0;

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX)
    {
        for (int i = 0; i < lengthEmployees; i++)
        {
            if(listEmployees[i].isEmpty == FALSE)
            {
                itemsCounter++;

                if(itemsCounter == 1)
                {
                    printf("+======+===============+===============+=============+============================+\n");
                    printf("|  ID  |    Nombre     |   Apellido    |   Salario   |           Sector           |\n");
                    printf("+======+===============+===============+=============+============================+\n");
                }

                if(!printEmployeeWithoutHeader(listEmployees[i], listSectors, lengthSectors))
                {
                    flagEmployees = 1;
                }
                else
                {
                    flagEmployees = 0;
                    break;
                }

            }
        }

        if(flagEmployees == 1)
        {
            printf("+------+---------------+---------------+-------------+----------------------------+\n");
        }
    }

    if(flagEmployees == 0)
    {
        printf("No existen Empleados en el listado.\n");
    }

    return itemsCounter;
}

int printSectors(sSector sectors[], int length)
{
    int itemsCounter = 0;
    int flagSectors = 0;

    if(sectors != NULL && length > 0 && length <= SECTOR_MAX)
    {
        for (int i = 0; i < length; i++)
        {
            itemsCounter++;

            if(itemsCounter == 1)
            {
                printf("+======+============================+\n");
                printf("|  ID  |           Sector           |\n");
                printf("+======+============================+\n");
            }

            printSectorWithoutHeader(sectors[i]);
            flagSectors = 1;
        }

        if(flagSectors == 1)
        {
            printf("+------+----------------------------+\n");
        }
    }

    if(flagSectors == 0)
    {
        printf("No existen Sectores cargados en el listado.\n");
    }

    return itemsCounter;
}

void printTotalsAndAverageSalaries(sEmployee listEmployees[], int lengthEmployees)
{
    int employeeQuantity;
    float totalSalaries;

    employeeQuantity = currentEmployeeCounter(listEmployees, lengthEmployees);
    totalSalaries = sumEmployeeSalaries(listEmployees, lengthEmployees);

    if(listEmployees != NULL && lengthEmployees > 0 && lengthEmployees <= EMPLOYEE_MAX
        && employeeQuantity > 0)
    {
        printf("+===========+================+===================+\n");
        printf("| Empleados | Total salarial | Promedio salarial |\n");
        printf("+===========+================+===================+\n");
        printf("| %9d |    $ %9.2f |       $ %9.2f |\n",
            employeeQuantity, totalSalaries, (totalSalaries / employeeQuantity));
        printf("+-----------+----------------+-------------------+\n");
    }
}

void sector_hardcode(sSector list[], int length, int quantity)
{
    sSector auxSector[] = {
        {getNewSectorId(), "Finanzas"},
        {getNewSectorId(), "Sistemas"},
        {getNewSectorId(), "Recursos Humanos"},
        {getNewSectorId(), "Ventas"},
        {getNewSectorId(), "Compras"},
        {getNewSectorId(), "Atencion Clientes"},
        {getNewSectorId(), "Administracion"},
        {getNewSectorId(), "Ingenieria"}
    };

    if(list != NULL && quantity <= SECTOR_MAX && length >= quantity)
    {
        for (int i = 0; i < quantity; i++)
        {
            list[i] = auxSector[i];
        }
    }
}

void employee_hardocde(sEmployee list[], int length, int quantity)
{
    sEmployee auxEmployess[] = {
        {getNewEmployeeId(), "Marcelo", "Tinelli", 25500, 15, FALSE},
        {getNewEmployeeId(), "Susana", "Gimenez", 135400, 14, FALSE},
        {getNewEmployeeId(), "Ricardo", "Darin", 75600, 11, FALSE},
        {getNewEmployeeId(), "Moria", "Casan", 99400, 13, FALSE},
        {getNewEmployeeId(), "Marley", "Wieber", 55300, 12, FALSE},
        {getNewEmployeeId(), "Mirtha", "Legrand", 67400, 17, FALSE},
        {getNewEmployeeId(), "Veronica", "Lozano", 38700, 16, FALSE},
        {getNewEmployeeId(), "Pampita", "Ardohain", 32750, 13, FALSE}
    };

    if(list != NULL && quantity <= 8 && length >= quantity)
    {
        for (int i = 0; i < quantity; i++)
        {
            list[i] = auxEmployess[i];
        }
    }
}

static int printEmployeeWithoutHeader(sEmployee employee, sSector list[], int length)
{
    int returnValue = -1;
    char sectorName[SECTOR_NAME_MAX];

    if(list != NULL && length > 0 && length <= SECTOR_MAX
        && !findSectorNameById(sectorName, list, length, employee.idSector))
    {
        printf("| %4d | %13s | %13s | %11.2f | %26s |\n",
            employee.id, arrays_stringToCamelCase(employee.name, EMPLOYEE_NAME_MAX),
            arrays_stringToCamelCase(employee.lastName, EMPLOYEE_LASTNAME_MAX), employee.salary, sectorName);
        returnValue = 0;
    }

    return returnValue;
}

static void printSectorWithoutHeader(sSector sector)
{
    printf("| %4d | %26s |\n", sector.idSector, arrays_stringToCamelCase(sector.name, SECTOR_NAME_MAX));
}


//Compile using command: gcc employeeMain.c employeeTable.c employeeOne.c

//gcc employeeMain.c employeeTable.c employeeTwo.c

#include <string.h>
#include <stdlib.h>
#include "employee.h"
int main(void){
    //defined in employeeOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //Declaration
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    //Example not found
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    //Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");


    //code added for quiz 1 -----------------------------------------------------------------------

    //search by phone
    //example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "949-999-1111");
    if(matchPtr != NULL)
        printf("Employee Phone number 949-999-1111 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone number is NOT found in the record\n");
    //example found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if(matchPtr != NULL)
        printf("Employee Phone number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone number is NOT found in the record\n");

    //search by salary
    //example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 9.99);
    if(matchPtr != NULL)
        printf("Employee Salary 9.99 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary is NOT found in the record\n");

    //example found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);
    if(matchPtr != NULL)
        printf("Employee Salary 8.32 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary is NOT found in the record\n");

    return EXIT_SUCCESS;
    
}
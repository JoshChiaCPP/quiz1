#include <string.h>
#include "employee.h"
PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++) //search until end of table
    {
        if(ptr->number == targetNumber) //check if it equals the Employee number
            return (PtrToEmployee) ptr; //return location of number to callee
    }
    return NULL; //only happens if above does not succeed
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char *targetPhone){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone,targetPhone) == 0) //string compare, check if phone number is equal
            return (PtrToEmployee) ptr;         //return location of phone number to callee
    }
    return NULL; //no match
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for (; ptr < endPtr; ptr++)
    {
        if(ptr->salary == targetSalary) //check if it equals the salary
            return (PtrToEmployee) ptr; //return location of salary to callee
    }
    return NULL; //no match
}


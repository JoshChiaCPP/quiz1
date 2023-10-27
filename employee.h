#include <stdio.h>
#include <stddef.h>

typedef struct {
    long number;
    char *name;
    char *phone;
    double salary;
<<<<<<< HEAD
} Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee;
=======
} Employee, *PtrToEmployee

typedef const Employee *PtrToEmployee;
>>>>>>> d25131cf7c6714ba270337fc4edd2b7ee4a70306

// Illustrate use of local, global and static variables in C.

#include <stdio.h>

int global = 10;                                // this is a global variable and can be accessed in all functions in the same file

void func() {
    static int static_var = 5;
    int local = 5;

    printf("Global: %d\n", global);             // global variable is accessible in all functions in the same file
    printf("Static: %d\n", static_var);         // static variable retains its value between function calls
    printf("Local: %d\n", local);               // local variable is accessible only within the function it is declared in

    global++;
    static_var++;
    local++;
}

int main() {
    func();
    func();
    func();

    return 0;
}

/*
    Output:
    Global: 10
    Static: 5
    Local: 5
    Global: 11
    Static: 6
    Local: 5
    Global: 12
    Static: 7
    Local: 5
*/

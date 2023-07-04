//Crear una funcion que calcule el Factorial de un numero

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursivo3 (int n);

int main()
{

   printf ("Factorial del numero 5: %d\n", recursivo3 (5));

    return 0;
}

int recursivo3 (int n)
{
    if ( n == 1 )     //si el numero es 1 devolver: 1
    {
        return 1;
    }
    else             //si no es 1, devolver el numero x la funcion(numero-1)
    {
        return n*recursivo3(n - 1);
    }
}

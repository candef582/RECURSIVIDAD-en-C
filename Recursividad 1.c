//Que es? = La recursividad es una funcion que se llama a si misma dentro.
// Se utiliza para reemplazar algoritmos que tienen while y for.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recur1 (int numeros[]);

int main()
{
    void recur1(int numeros[6,3,9,2]);
    return 0;
}

void recur1 (int numeros[])
{
    if (numeros>=0)      //los algoritmos recursivos deben tener una condicion de corte o de ejecucion.
    {
        printf ("----> %d \n", numeros); //si el print se pone antes de llamar a recur1 se imprimen los numeros de menor a mayor.

        recur1(numeros-1);

        //printf ("----> %d \n", n); //si el print se pone luego de recur1 se imprimen los numeros de mayor a menor.
    }
}

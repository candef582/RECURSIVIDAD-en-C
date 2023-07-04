//busqueda binaria recursiva

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Para floor

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha);

int main(){
    int numeros[] = {2, 5, 6, 9, 14, 16, 18, 20, 50};
    int busqueda = 18;
    int longitudDelArreglo = sizeof(numeros) / sizeof(numeros[0]);
    int resultadoBusquedaRecursiva = busquedaBinariaRecursiva(numeros, busqueda, 0, longitudDelArreglo - 1);
    printf("Al buscar %d recursivamente, el resultado es %d\n", busqueda, resultadoBusquedaRecursiva);
    return 0;
}

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha)
    {
        return -1;
        };

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int centro = arreglo[indiceDeLaMitad];

    if (busqueda == centro)
    {
        return indiceDeLaMitad;
    }

    if (busqueda < centro)
    {
        derecha = indiceDeLaMitad - 1;
    }
    else
    {
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}

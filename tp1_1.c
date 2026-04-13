#include <stdio.h>
int main( ){
    printf("Hola mundo");
    int valor = 7;
    int *numerito;
    numerito = &valor; 
    printf("El contenido del puntero es: %d", *numerito);
    printf("\nLa dirección de memoria almacenada por el puntero es: %p", numerito);
    printf("\nLa dirección de memoria de la variable es: %p", &valor);
    printf("\nLa dirección de memoria del puntero es: %p", &numerito);
    printf("\nEl tamaño de memoria utilizado por esa variable %d", sizeof(*numerito));
    
    // El resultado es el mismo pues el puntero está señalando a la dirección de memoria de la variable.

    
    return 0;
}
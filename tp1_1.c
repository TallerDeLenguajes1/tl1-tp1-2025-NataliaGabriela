#include <stdio.h>

int main()
{
    printf("Hola Mundo\n");

    int variable = 5, *p_variable;
    p_variable = &variable;
    printf("Contenido del Puntero: %d\n", *p_variable);
    printf("Dirección de memoria almacenada: %p\n", p_variable);
    printf("Dirección de memoria de la variable: %p\n", &variable);
    printf("Dirección de memoria del puntero: %p\n", &p_variable);
    printf("Tamaño de memoria de la variable: %d bytes\n", sizeof(variable));
    getchar();
}
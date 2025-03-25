#include <stdio.h>
#include <stdlib.h>

int cuadrado(int numero1);
void cuadrad(int numero1);
void invertir(int uno, int dos);
void ordenar(int uno, int dos);
int main()
{
    int resultado, numero1, numero2, uno, dos;
    printf("Ingrese un numero entero");
    scanf("%d", &numero1);

    resultado = cuadrado(numero1);
    printf("1) El cuadrado de %d es %d\n", numero1, resultado);
    cuadrad(numero1);
    printf("Ingrese un numero entero");
    scanf("%d", &numero2);
    printf("Contenido de la variable: %d\n", numero2);
    printf("Direccion de la variable:%p\n", &numero2);
    printf("Ingrese el primer numero");
    scanf("%d", &uno);
    printf("Ingrese el segundo numero");
    scanf("%d", &dos);
    if (uno == dos)
    {
        printf("los numeros ingresados son iguales");
    }
    else
    {
        invertir(uno, dos);
        ordenar(uno, dos);
    }

    scanf(" %c");
    return 0;
}
int cuadrado(int numero1)
{
    int resultado = numero1 * numero1;
    return resultado;
}
void cuadrad(int numero1)
{
    int resultado;
    resultado = numero1 * numero1;
    printf("2) El cuadrado de %d es %d\n", numero1, resultado);
}
void invertir(int uno, int dos)
{
    int aux;
    aux = uno;
    uno = dos;
    dos = aux;

    printf("Ahora el primer numero es: %d y el segundo: %d\n", uno, dos);
}
void ordenar(int uno, int dos)
{
    int aux;
    if (uno < dos)
    {
        printf("Menor: %d Mayor: %d\n", uno, dos);
    }
    else
    {
        printf("Menor: %d Mayor: %d\n", dos, uno);
    }
}
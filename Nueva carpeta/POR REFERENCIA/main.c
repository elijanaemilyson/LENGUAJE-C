#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

void cambiarEntero (int numero);
void cambiarVector (int vectorListadodeNumeros[cantidad]);
void cargarVectorconMenosUno ( int listado[cantidad] );
//sacar el tamaño de un vector
int main()
{
    int edad = 22;

    int edades [3];

    cambiarEntero(edad);
    printf("%d" , edad);

    cambiarVector(edades);

    printf("\n%d" , edades[0]);
    return 0;
}

void cargarVectorconMenosUno( int listado [cantidad] )
{
    int i;
    int tamanio;

    for(i=0;i<tamanio;i++)
    {
     listado [0] = -1;

    }

}

void cambiarEntero (int numero)
{
    numero = 666;


}

void cambiarVector(int listadodeNumeros[cantidad])
{
    int tamanioArray;
    int tamanioElemento;
    int listadodeNumeros[cantidad]={2,3,4};

    tamanioArray = sizeof(listadoNumeros);
    printf("\n%d" , sizeof ( int listadodeNumeros[cantidad]));
    tamanioElemento = sizeof(listadoEdades[0]);
    printf("\n%d" , sizeof ( int listadodeNumeros[cantidad]));

    listadodeNumeros[0] = 666;


    return tamanioArray;




}

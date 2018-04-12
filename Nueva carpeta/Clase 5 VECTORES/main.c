#include <stdio.h>
#include <stdlib.h>

int dameUnEntero (int , int);
float dameUnFlotante(int , int);

int main() // PEDIR EL DATO Y CARGA SECUENCIAL :
{
    //pedir un lugar entre 0 y el max en el vector
    //validar el numero entre Min y Max
    //pedir el valor a guardar entre 1 y 1000
    //guardar el valor


    int i; // indice
    int indice;
    float listadoPrecios[5];
    float precioAux;

    indice = dameUnEntero (0 ,4); // pido el lugar - LLAMADA A LA FUNCION
    indice = dameUnFlotante (1,1000);

    listadoPrecios[indice] = precioAux

    for (i=0 ; i<5 ; i++){

        printf("\n %d" , i );
        scanf("%d" , &listadoPrecios[i]);

        printf("\nListado de precios : %d", listadoPrecios[i]);



    }

    return 0;

}

    int dameUnEntero(int numeroX , int numeroY)
    {
        int numero;
        printf("Ingrese un numero entre %d y %d: " , numeroX , numeroY);
        scanf("\n%d" , &numero);

        while (numero<numeroX || numeroY)
        {
            printf("Error: Ingrese un numero entero entre %d y %d " , numeroX . numeroY);
            scanf("\n%d" ,&numero);
        }

        return numero;
    }

    float dameUnFlotante ( int numeroX , int numeroY )
    {
        float numero;
        printf("Ingrese un numero entre %d y %d: " , numeroX , numeroY);
        scanf("\n%.2f" , &numero);

        while (numero<numeroX || numeroY)
        {
            printf("Error: Ingrese un numero flotante entre %d y %d " , numeroX . numeroY);
            scanf("\n%.2f" ,&numero);
        }

        return numero;
    }

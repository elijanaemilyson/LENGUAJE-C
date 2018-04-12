#include <stdio.h>
#include <libstdio.h>

//crear fun ejemplo carga secuencial

void ejemploCargaSecuencial (void){

    int edad; //cuando declaro una variable
    float precio;
    int listadoEdades [5] = {22,33,44,11,55};
    /*en el vector coloco el nº de elementos para reservar en memoria
    y la inicializo colocando elementos del mismo tipo y siendo la misma cantidad de nº de elementos definida en el vector*/
    float listadoPrecios [5];
    int i; // coloco el indice p/ determinar la posicion de elementos de mi vector

    edad = 66;

    printf("%d" , edad);
    printf("\n%d" ,&edad);//asi se ve la direccion de memoria que tiene el dato
    printf("\n&listadoEdades: %d" , &listadoEdades);
    printf("\nlistadoEdades: %d" , listadoEdades);
    printf("\nlistadoEdades [0]: %d" , listadoEdades[0]);
    printf("\nlistadoEdades[4]: %d" , listadoEdades[4]);
    printf("\nlistadoEdades[5]: %d" , listadoEdades[5]);

    /*for( i=0 ; i<5 ; i++ ){

        printf("\n %d : [%d]" , i , listadoEdades[i]);
    } */


      for( i=0 ; i<5 ; i++ ){

        printf("\nIngrese el numero %d" , i );
        scanf("%d" , &listadoEdades[i]);

        printf("%d", listadoEdades[i]);
      }

      for( i=0 ; i<5 ; i++ ){

        printf("\nIngrese el numero %d" , i );
        scanf("%d" , &listadoPrecios[i]);

        printf("\nListado de precios : %d", listadoPrecios[i]);



    }

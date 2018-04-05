#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[] , int , int);

int validarEntero(int , int , int);

int main()
{ //no sirve para distintos tipos de datos ej: edad , legajo , nota
    int edad; // 18-60
    int legajo; // 1-1000
    int nota; // 1-10
    int min;
    int max;

    //simular un string mediante cadenas de char

    edad = pedirEntero(" edad: " , 18 , 60);
    legajo = pedirEntero(" legajo: " , 1 , 1000);
    nota = pedirEntero(" nota: " , 1 , 10);
    printf("La edad es : %d ,el legajo es : %d y la nota es : %d", edad , legajo , nota);

    return 0;
}

int pedirEntero(char mensaje[] , int min , int max) // vector : cadena de elementos
// min max variar
{
    int numero;
    printf("Ingrese %s " , mensaje); // %s p/ cadena de char o caracteres // llamo mensaje p todas "generico"
    scanf("%d" ,&numero);

    numero = validarEntero(numero , min , max , mensaje )
    /*while(numero<min || numero>max) // NO PONER DATOS CONSTANTES
    {
    printf("Error : %s" , mensaje); // %s p/ cadena de char o caracteres // llamo mensaje p todas "generico"
    scanf("%d" ,&numero);
    }*/

    return numero;

}

int validarEntero(int dato , int min , int max ,char mensaje []) // parametro se usa como retorno - entrada y salida
{
    while(dato<min || dato>max)
    {
        printf("Error: Reingrese %s");
        scanf("%d" , &dato);
    }
}


/*int main()
{ //no sirve para distintos tipos de datos ej: edad , legajo , nota
    int numero1;
    int numero2;

    numero1 = pedirNumero();
    numero2 = pedirNumero();
    printf("El numero ingresado es : %d y %d", numero1 , numero2 );

    return 0;
}

int pedirNumero()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d" ,&numero);

    return numero;


}*/



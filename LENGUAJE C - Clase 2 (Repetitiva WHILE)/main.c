#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    char respuesta = 's';
    int pares = 0;
    int impares = 0;
    int numeroMaximo;
    int numeroMinimo;
    int contNegativo = 0;
    int contPositivo = 0;
    int contNumeros;
    float porPositivos;
    float porNegativos;
    int flag = 0;
    int maximoPar;

    do{
        printf("\nIngrese los numeros: ");
        scanf("%d" , &numeros );

        while(numeros == 0)
        {
            printf("Reingrese los numeros: ");
            scanf("%d" , &numeros );
        }//verificador

        if (numeros%2 == 0){

            if(pares == 0 || numeros >maximoPar)
            {
            maximoPar = numeros;
            } //ver linea 53
            pares++;

        } else {
            impares++;
        }//contador pares e impares

        if (numeros>0){
            contPositivo++;
        }   else {
            contNegativo++;
        }//contador positivos y negativos


        if(flag == 0 || numeros > numeroMaximo)// si una es verdadera entra iterar
        {
            numeroMaximo = numeros;

            /*if (numeros%2==0)
            {
                maximoPar = numeros;
            }*/ //alternativa linea 32, TIENE BUG Y NO SIRVE

        }
        if(flag == 0 || numeros < numeroMinimo)
        {
            numeroMinimo = numeros;
            flag = 1;
        }//maximos y minimos, eficiente!



        /*if(flag == 0)
        {
            flag = 1;
            numeroMaximo = numeros;
            numeroMinimo = numeros;
        } else
        {
            if(numeros<numeroMinimo)
            {
                numeroMinimo = numeros;
            }
            if(numeros>numeroMaximo)
            {
                numeroMaximo = numeros;
            }
        }//maximos y minimos*/





        printf("Desea continuar?");
        respuesta = getche();

    }while (respuesta !='n');

    contNumeros = contNegativo + contPositivo;
    porPositivos = (float)(contPositivo * 100 ) / contNumeros; // CASTEO FLOAT
    porNegativos = 100 - porPositivos; //(contNegativos * 100 /


    printf("\nLa cantidad de numeros pares es : %d" , pares);
    printf("\nLa cantidad de numeros impares es : %d" , impares);
    printf("\nEl porcentaje de numeros positivos es : %f %%" , porPositivos);
    printf("\nEl porcentaje de numeros negativos es : %f %%" , porNegativos);
    printf("\nEl numero maximo es: %d", numeroMaximo);
    printf("\nEl numero minimo es: %d" , numeroMinimo);


    return 0;
}

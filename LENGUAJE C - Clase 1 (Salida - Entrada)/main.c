#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 = 9;
    float numero2;
    float resultado;
    char letra;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero decimal: " );
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    /* fflush (stdn);
    scanf ("%c" , &letra);*/
    //fflush(stdin);

    letra = getche();
    //letra = getch(): ( no hace eco , no hace replicas no muestra lo ingresado)

    //scanf("%c", &letra);

    resultado = numero1 + numero2;

    printf("\nEl numero entero es : %d y el numero decimal es : %.2f \n" , numero1 , numero2);

    printf("\nLa letra es : %c" , letra);

    printf("\nEl resultado de la suma es : %.2f \n" , resultado);
    return 0;
}

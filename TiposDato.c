/**
 * @file TiposDato.c
 * @author {Rodriguez Cruz David Emiliano} (drodriguezc1900@alumno.ipn.mx)
 * @brief Ejemplos de los diferentes tipos de datos que hay en C
 * @version 0.1
 * @date 2025-08-08
 * @copyright Copyright (c) 2025
 */

# include <stdio.h>
int main(int argc, char const *argv[])
{
    //Variables
    int Valor = 10; //Valor de tipo entero
    short Corto = 5;
    long Largo = 100000;
    float Pi = 3.141692653589793238;
    double ValorDoble = 1.6180339887;
    char Caracter = 'a';
    char Caracteres4 [4]="Hola";


    //Impresion de datos
    printf("%i\n",Valor);
    printf("%hi\n",Corto);
    printf("%li\n",Largo);
    printf("%f\n",Pi);
    printf("%lf\n",ValorDoble);
    printf("%c\n",Caracter);
    printf("%s\n",Caracteres4);
    return 0;
}

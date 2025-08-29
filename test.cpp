/**
 * @file test.cpp
 * @author {Rodriguez Cruz David Emiliano} (drodriguezc1900@alumno.ipn.mx)
 * @brief Programa para solicitar unos datos al usuario y poder imprimir en pantalla
 * @version 0.1
 * @date 2025-08-29
 * @copyright Copyright (c) 2025
 */

#include<iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int Edad;
    string Nombre;

    //Solicitud de datos (impresion y captura)
    cout << "Usuario, ingresa tu nombre: ";
    getline(cin,Nombre);

    cout << "Usuario ingresa tu edad: ";
    cin >> Edad;

    cout << Nombre <<", tu edad es " << Edad << "." << endl;
    
    return 0;
}

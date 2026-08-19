
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Escriba un programa que pida un número entero positivo N al usuario y
//mediante un bucle while, determine e imprima cuántos dígitos tiene dicho
//número y la suma de estos

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    int aux =n, contador=0,suma=0,ultimo=0;

    while (aux > 0) {
        ultimo= aux % 10;
        suma+= ultimo;
        contador++;
        aux = aux / 10;
    }

    cout << "el total de digitos es: "<<contador<< endl;
    cout << "La suma es" << suma<< endl;

    return 0;
}



// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarAleatorio() {
    return (rand() % 10) + 1;
}

double calcularFactorial(int numero) {
    double factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    srand(time(0));
    int num = generarAleatorio();
    cout << "Numero aleatorio generado: " << num << endl;
    double resultado = calcularFactorial(num);
    cout << "El factorial de " << num << " es: " << resultado << endl;
    return 0;
}

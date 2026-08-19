// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
// Dado un número entero positivo N de cualquier cantidad de dígitos,
// imprimir una cuadrícula de tamaño d x d por cada dígito d del número.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingresa un numero: ";
    cin >> N;
    int aux = N;
    while (aux > 0) {
        int d = aux % 10;
            for (int i = 0; i < d; i++) {
                for (int j = 0; j < d; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        aux = aux / 10;
}

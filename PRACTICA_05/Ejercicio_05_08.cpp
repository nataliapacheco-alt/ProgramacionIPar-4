// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void simularMoneda(int n, int &caras, int &cruces) {
    for (int i = 0; i < n; i++) {
        if (rand() % 2 == 0) {
            caras++;
        } else {
            cruces++;
        }
    }
}

int main() {
    srand(time(0));
    int n;
    int caras = 0, cruces = 0;

    cout << "Cantidad de lanzamientos: ";
    cin >> n;

    simularMoneda(n, caras, cruces);

    cout << "Porcentaje de Caras: " << (caras * 100.0) / n << "%" << endl;
    cout << "Porcentaje de Cruces: " << (cruces * 100.0) / n << "%" << endl;

    return 0;
}


// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 10

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool numprimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}
void procesarNumeros(int n, int &contadorPrimos) {
    for (int i = 0; i < n; i++) {
        int num = (rand() % 10000) + 1;
        cout << num << " ";
        if (numprimo(num)) {
            contadorPrimos++;
        }
    }
}

int main() {
    srand(time(0));
    int n;
    int primos = 0;
    cout << "Cantidad de numeros a generar: ";
    cin >> n;
    cout << "Numeros generados:" << endl;
    procesarNumeros(n, primos);
    cout << "Cantidad de numeros primos: " << primos << endl;
    return 0;
}

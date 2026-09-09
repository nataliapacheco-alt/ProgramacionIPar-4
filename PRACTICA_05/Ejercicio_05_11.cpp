
// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 11

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}
int main() {
    srand(time(0));
    int n, sumaPares = 0, sumaImpares = 0, cantImpares = 0, mayorPrimo = -1;
    cout << "Cantidad de numeros (N): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num = (rand() % 1000) + 1;
        cout << num << " ";
        if (num % 2 == 0) {
            sumaPares += num;
        } else {
            sumaImpares += num;
            cantImpares++;
        }
        if (esPrimo(num) && num > mayorPrimo) {
            mayorPrimo = num;
        }
    }

    cout << "Suma pares: " << sumaPares << endl;
    if (cantImpares > 0) {
        cout << "Promedio impares: " << (double)sumaImpares / cantImpares << endl;
    } else {
        cout << "Promedio impares: 0" << endl;
    }
    if (mayorPrimo != -1) {
        cout << "Mayor primo: " << mayorPrimo << endl;
    } else {
        cout << "Mayor primo: No hubo" << endl;
    }
    return 0;
}

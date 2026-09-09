// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 12
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int calcularPanales(int n, int &n1, int &n2, int &n3) {
    if (n > 0) n1 = rand()%(n + 1);
    if (n - n1 > 0) n2 = rand()%(n-n1+1);
    if (n - n1 - n2 > 0) n3 = rand() % (n - n1 - n2 + 1);
    return (n1 * 6) + (n2 * 3) + (n3 * 2);
}
int main() {
    srand(time(0));
    int n, n1 = 0, n2 = 0, n3 = 0;

    cout << "Ingrese la cantidad maxima de ninos (N): ";
    cin >> n;

    int totalPanales = calcularPanales(n, n1, n2, n3);

    cout << "\nNinos de 1 ano: " << n1 << endl;
    cout << "Ninos de 2 anos: " << n2 << endl;
    cout << "Ninos de 3 anos: " << n3 << endl;
    cout << "Total ninos asignados: " << (n1 + n2 + n3) << " de " << n << endl;
    cout << "Total panales consumidos: " << totalPanales << " pañales" << endl;

    return 0;
}

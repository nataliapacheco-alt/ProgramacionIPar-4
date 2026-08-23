// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;

int main() {

    int n,sumatotal=0,factoria=1;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factoria = factoria*i;
        sumatotal = sumatotal + factoria;
    }
    cout << "La suma de los factoriales es: " << sumatotal << endl;
    return 0;
}


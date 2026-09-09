// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 7
#include <iostream>
using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}
int main() {
    double sumaTotal = 0.0;
    int cantidadNotas = 0;
    int n;
    double nota;
    cout << "Cantidad de notas a ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        agregarNota(sumaTotal, cantidadNotas, nota);
    }
    cout << "Resultados:" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;
    if (cantidadNotas > 0) {
        cout << "Promedio: " << (sumaTotal / cantidadNotas) << endl;
    }
    return 0;
}

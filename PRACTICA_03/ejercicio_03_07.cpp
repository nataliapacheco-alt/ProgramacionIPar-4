// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 23/08/2026
#include<iostream>
using namespace std;

int main () {
    int numero,sumadivisores = 0;
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> numero;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumadivisores = sumadivisores + i;
        }
    }
    if (sumadivisores == numero) {
        cout << "El numero: " <<numero<<"es perfecto."<< endl;
    }
    else {
        cout << "El numero: " <<numero<<"no es perfecto."<< endl;
    }
    return 0;
}

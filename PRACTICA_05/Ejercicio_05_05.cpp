// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 5
/*5. Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
distintos:
• Un parámetro (double): Calcula el área de un cuadrado.
• Dos parámetros (double, double): Calcula el área de un rectángulo.
• Un parámetro (float, float PI): Calcula el área de un círculo */
// Fecha creación: 09/09/2026
// Número de ejercicio: 5
/* 5. Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
distintos:
• Un parámetro (double): Calcula el área de un cuadrado.
• Dos parámetros (double, double): Calcula el área de un rectángulo.
• Un parámetro (float, float PI): Calcula el área de un círculo */
#include <iostream>
using namespace std;
double calcularArea(double lado) {
    return lado * lado;
}
double calcularArea(double base, double altura) {
    return base * altura;
}
float calcularArea(float radio, float pi) {
    return pi * radio * radio;
}
int main() {
    cout << "Area del cuadrado: " << calcularArea(5.0) << endl;
    cout << "Area del rectangulo: " << calcularArea(4.0, 6.0) << endl;
    cout << "Area del circulo: " << calcularArea(3.0, 3.1416) << endl;
    return 0;
}

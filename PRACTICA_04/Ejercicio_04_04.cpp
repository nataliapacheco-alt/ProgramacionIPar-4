// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Conversión de Divisas: Escriba una función que convierta un monto dado en
//bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio
//oficial y paralelo
#include<iostream>
using namespace std;
void cambiodolares (int monto)
{
    float cambiooficial,cambioparalelo;
    cambiooficial=monto/7;
    cambioparalelo=monto/12;
    cout<<"el cambio oficial es: "<<cambiooficial<<endl;
    cout<<"el cambio paralelo es: "<<cambioparalelo<<endl;
}
int main(){
    int monto;
    cout<<"bienvenido a la casa de cambios en dolares"<<endl;
    cout<<"ingrese el monto en Bolivianos: "<<endl;
    cin>>monto,
    cambiodolares(monto);

return 0;
}

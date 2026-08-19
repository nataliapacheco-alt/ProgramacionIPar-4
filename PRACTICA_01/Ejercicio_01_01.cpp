// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Escriba un programa que lea un año (un número entero de 4 dígitos) e
//indique mediante una condición if si el año introducido es bisiesto.
#include<iostream>
using namespace std;
int main (){
    int ano;
    cout<<"ingresa el año: "<<endl;
    cin>>ano;
    if (ano%2==0){
        cout<<"es año bisiesto"<<endl;
    }
    else
        cout<<"no es año bisiesto"<<endl;
    return 0;
}

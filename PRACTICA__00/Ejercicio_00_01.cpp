// Materia: Programacion I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: Comunicacion digital y multimedia
// Fecha de Creacion: 18/08/2026
//1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
//en la salida estandar su suma, resta, multiplicacion y division.

#include<iostream>
using namespace std;
int main (){
    int a,b;
    float suma,resta,division,multiplicacion;
    cout<<"ingrese el primer numero";
    cin>>a;
    cout<<"ingrese el segundo numero";
    cin>>b;
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;
    cout<<"la suma es: "<<suma<<endl;
    cout<<"la resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"la division es: "<<division<<endl;
    return 0;
}

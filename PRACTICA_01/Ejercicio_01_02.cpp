// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Escribir un programa que de la entrada estándar el precio de un producto y
//muestre en la salida estándar el precio del producto al aplicarle el IVA
//(IVA=13%)
#include<iostream>
using namespace std;
int main (){
    float precio, iva, resta;
    cout<<"ingrese el precio del producto"<<endl;
    cin>>precio;
    iva=precio*0.13;
    resta=precio-iva;
    cout<<"el total de la resta es: "<<resta<<endl;
    cout<<"sin la iva el costo seria: "<<precio<<endl;


return 0;
}

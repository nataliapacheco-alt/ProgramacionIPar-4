
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Realice un programa que pida al usuario un número entero entre el 1 y el 7.
//Mediante una estructura switch, muestre el día de la semana
//correspondiente (1 para Lunes, 2 para Martes, etc.). Si el número está fuera
//del rango, debe mostrar un mensaje de error.
#include<iostream>
using namespace std;
int main (){
    int numero;
    cout<<"ingresa el numero: "<<endl; cin>>numero;
    switch(numero){
    case 1:
        cout<<"lunes"<<endl;
        break;
    case 2:
        cout<<"martes"<<endl;
        break;
    case 3:
        cout<<"miercoles"<<endl;
        break;
    case 4:
        cout<<"jueves"<<endl;
        break;
    case 5:
        cout<<"viernes"<<endl;
        break;
    case 6:
        cout<<"sabado"<<endl;
        break;
    case 7:
        cout<<"domingo"<<endl;
        break;
    default:
        cout<<"error"<<endl;
        break;
    }
return 0;
}

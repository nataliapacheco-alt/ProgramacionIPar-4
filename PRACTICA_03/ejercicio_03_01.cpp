// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 21/08/2026
#include<iostream>
using namespace std;
//Realice un programa que solicite de la entrada un entero del 1 al 10 y
//muestre en la salida su tabla de multiplicar.
int main(){
int numero;

cout<<"ingrese el numero del 1 al 10"<<endl; cin>>numero;
if (numero>=1 && numero<=10){
    for (int i=1; i<=10;i++){
            cout<<"la multiplicacion es: "<<numero<<"x"<<i<<" = "<<numero*i<<endl;
    }
}
else {
    cout<<"numero incorrecto"<<endl;
}
    }

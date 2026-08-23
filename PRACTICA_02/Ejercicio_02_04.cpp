// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: comunicacion digital y multimedia
// Fecha de Creación: 23/08/2026
#include<iostream>
using namespace std;
int main (){
    int numero,calculo=0;
    cout<<"ingrese el numero: "<<endl; cin>>numero;
    for (int i=1;i<=numero;i++){
        calculo=calculo+i;
    }
    cout<<"la suma es: "<<calculo<<endl;

return 0;
}

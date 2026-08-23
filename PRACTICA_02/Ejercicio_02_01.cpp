// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: comunicacion digital y multimedia
// Fecha de Creación: 23/08/2026
#include<iostream>
using namespace std;
int main (){
    int numero,multiplicacion;
    cout<<"ingrese el numero: "<<endl; cin>>numero;
    for (int i=0;i<=10;i++){
        multiplicacion=numero*i;
        cout<<numero<<"x"<<i<<" = "<<multiplicacion<<endl;
    }


return 0;
}

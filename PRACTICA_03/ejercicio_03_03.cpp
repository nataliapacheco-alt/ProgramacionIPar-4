// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 21/08/2026
#include<iostream>
using namespace std;
// Escriba un programa que calcule el valor de: 1+2+3+...+n
int main (){
    int contsuma=0, n;
    cout<<"ingrese el valor de n: "<<endl; cin>>n;
    for (int i=1;i<=n;i++){
        contsuma=contsuma+i;
    }
    cout<<contsuma<<endl;





return 0;
}



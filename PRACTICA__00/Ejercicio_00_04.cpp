
// Materia: Programacion I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: Comunicacion digital y multimedia
// Fecha de Creacion: 18/08/2026
#include<iostream>
using namespace std;
int main (){
    float a,b,c,d,e,f,resultado=0;
    cout<<"valor de a: "<<endl; cin>>a;
    cout<<"valor de b: "<<endl; cin>>b;
    cout<<"valor de c: "<<endl; cin>>c;
    cout<<"valor de d: "<<endl; cin>>d;
    cout<<"valor de e: "<<endl; cin>>e;
    cout<<"valor de f: "<<endl; cin>>f;

    resultado=(a+(b/c))/(d+(e/f));
    cout<<"el resultado es: "<<resultado<<endl;
    return 0;
    }

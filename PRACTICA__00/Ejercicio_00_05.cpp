// Materia: Programacion I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: Comunicacion digital y multimedia
// Fecha de Creacion: 18/08/2026
#include<iostream>
using namespace std;
int main (){
    int x,y,aux;
    cout<<"valor de x: "<<endl;
    cin>>x;
    cout<<"valor de y: "<<endl;
    cin>>y;
    aux=x;
    x=y;
    y=aux;
    cout<<"el valor de x es : "<<x<<endl;
    cout<<"el valor de y es: "<<y<<endl;

    return 0;
    }

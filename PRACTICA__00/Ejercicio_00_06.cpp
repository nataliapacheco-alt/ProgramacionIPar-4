// Materia: Programacion I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: Comunicacion digital y multimedia
// Fecha de Creacion: 18/08/2026
#include<iostream>
using namespace std;
int main (){
    float teoria, practica,participacion,notafinal;
    cout<<"ingrese la nota teorica"<<endl;
    cin>>teoria;
    cout<<"ingrese la nota practica"<<endl;
    cin>>practica;
    cout<<"ingrese la nota de participacion"<<endl;
    cin>>participacion;
    practica=practica*0.30;
    teoria=teoria*0.60;
    participacion=participacion*0.10;
    notafinal=practica+teoria+participacion;
    cout<<"la nota final es : "<<notafinal<<endl;
    return 0;
    }

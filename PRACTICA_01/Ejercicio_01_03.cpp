
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Realice un programa que lea de la entrada estándar los siguientes datos de
//una persona:
//a. Edad: dato de tipo entero.
//b. Sexo: dato de tipo carácter.
//c. Altura en metros: dato de tipo real.
//Tras leer los datos, el programa debe mostrarlos en la salida estándar
#include<iostream>
using namespace std;
int main (){
    int edad;
    float altura;
    char sexo[10];
    cout<<"ingrese la edad"<<endl; cin>>edad;
    cout<<"ingrese la altura"<<endl; cin>>altura;
    cout<<"ingrese el sexo"<<endl; cin>>sexo;

    cout<<"la edad es: "<<edad<<endl;
    cout<<"la altura es: "<<altura<<endl;
    cout<<"el genero es: "<<sexo<<endl;
    }

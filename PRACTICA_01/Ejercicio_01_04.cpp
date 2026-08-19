
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
 //La calificación final de un estudiante es el promedio de tres notas: la nota
//de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
//60% y la nota de participación que cuenta el 10% restante. Escriba un
//programa que lea las tres notas del alumno y escriba su nota fina

#include<iostream>
using namespace std;
int main (){
    int  nota, practicas, teoria, participacion;
    cout<<"ingrese la nota de practicas"<<endl; cin>>practicas;
    cout<<"ingrese la nota de teoria"<<endl; cin>>teoria;
    cout<<"ingrese la nota de participacion"<<endl; cin>>participacion;
    practicas=practicas*0.30;
    teoria=teoria*0.60;
    participacion=participacion*0.10;
    nota=practicas+teoria+participacion;
    cout<<"la nota total es: "<<nota<<endl;



return 0;
}

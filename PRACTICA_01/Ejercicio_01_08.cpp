// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//ealice un programa que solicite al usuario ingresar una nota numérica en
//el rango de [0 a 100]. El programa debe repetir la solicitud mediante un
//bucle while mientras el usuario ingrese un valor inválido (menor a 0 o mayor
//a 100). Una vez ingresada una nota válida, debe mostrar el mensaje: "Nota
//registrada correctamente".
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"ingrese la nota";
    cin>>n;
    while (n<0 || n>100){
        cout<<"invtalido";
        cin>>n;
    }
    cout<<"nota registrada correctamente";
return 0;
}

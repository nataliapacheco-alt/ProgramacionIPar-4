// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Cálculo de Área Geométrica: Desarrolle una función que reciba la base y la altura
//de un triángulo y devuelva su área (Area= (base x altura) / 2).
#include<iostream>
using namespace std;
float areageometrica (float b,float a)
{
    return (b*a)/2;
}
int main(){
    float base, altura;
    cout<<"ingrese el valor de base: "<<endl;
    cin>>base;
    cout<<"ingrese la altura; "<<endl;
    cin>>altura;
    cout<<"el valor total es :"<<areageometrica(base,altura)<<endl;
return 0;
}

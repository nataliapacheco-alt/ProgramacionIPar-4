// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de
//un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor
//de π.
#include<iostream>
using namespace std;
int volumencilindro (int radio, int altura)
{
    const float pi=3.1416;
    float resultado;
    resultado=pi*radio*radio*altura;
    return resultado;
}
int main(){
    int radio,altura;
    cout<<"ingrese el radio: "<<endl;
    cin>>radio;
    cout<<"ingrese la altura: "<<endl;
    cin>>altura;
    cout<<"el total es: "<<volumencilindro(radio,altura);
return 0;
}

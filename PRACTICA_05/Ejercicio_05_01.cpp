// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Fecha creación: 08/09/2026
// Número de ejercicio: 1
/*1. Crea una función llamada “IntercambiarValores” que reciba dos parámetros por
referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a
la función. */

#include<iostream>
using namespace std;
void intercambiarvalores (int &num1, int &num2)
{
    int extra;
    extra=num1;
    num1=num2;
    num2=extra;
}
int main (){
    int num1,num2;
    cout<<"ingrese el primer numero :"<<endl;
    cin>>num1;
    cout<<"ingerse el segundo numero: "<<endl;
    cin>>num2;
    cout<<num1<<endl<<num2<<endl;
    intercambiarvalores(num1,num2);
    cout<<num1<<endl<<num2<<endl;
return 0;
}

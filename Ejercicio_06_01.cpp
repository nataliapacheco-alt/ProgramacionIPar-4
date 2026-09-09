
// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco
// Carrera: Comunicacion digital
// Fecha de Creación: 9/09/2026
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

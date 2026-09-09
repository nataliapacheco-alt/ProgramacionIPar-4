// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Fecha creación: 08/09/2026
// Número de ejercicio: 2
#include<iostream>
using namespace std;
void modificarvalores(int num1,int &num2)
{
    num1=num1*2;
    num2=num2+10;
}
int main(){
    int num1,num2;
    cout<<"ingerese el primer numero "<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero: "<<endl;
    cin>>num2;
    cout<<num1<<endl<<num2<<endl;
    modificarvalores(num1,num2);
    cout<<num1<<endl<<num2<<endl;

return 0;
}

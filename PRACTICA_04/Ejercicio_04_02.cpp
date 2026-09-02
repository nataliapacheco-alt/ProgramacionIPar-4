// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Determinación de Mayoría: Cree una función que reciba tres números enteros y
//devuelva el mayor de ellos. El programa principal debe capturar los tres valores y
//mostrar el resultado.
#include<iostream>
using namespace std;
int mayornumero (int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3){
        return n1;
    }
    else {
        if (n2>n1 && n2>n3){
            return n2;
        }
        else {
            if (n3>n2 && n3>n1){
                return n3;
            }
        }
    }
}
int main(){
    int n1,n2,n3;
    cout<<"ingrese el primer numero: "<<endl;
    cin>>n1;
    cout<<"ingrese el segundo numero: "<<endl;
    cin>>n2;
    cout<<"ingrese el tercer numero: "<<endl,
    cin>>n3;
    cout<<mayornumero(n1,n2,n3)<<endl;
return 0;
}

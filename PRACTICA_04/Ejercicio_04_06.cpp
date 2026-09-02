// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Sumatoria de Naturales: Realice una función que reciba un número entero
//positivo N y calcule la suma de todos los números desde 1 hasta N mediante un
//ciclo.

#include<iostream>
using namespace std;
int contadornumero (int numero)
{
    int cont=0;
    for (int i=1; i<=numero;i++){
        cont=cont+i;
    }
    return cont;
}
int main(){
    int numero;
    cout<<"ingrese el numero: "<<endl;
    cin>>numero;
    cout<<contadornumero(numero);
return 0;
}

// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
#include<iostream>
using namespace std;
//Contador de Dígitos: Desarrolle una función que reciba un número entero positivo
//y devuelva la cantidad de dígitos que lo componen (utilizando divisiones
//sucesivas entre 10).
int contadordedigitos(int numero)
{
    int cont=0;
    int resta;
    while (numero!=0)
    {
        numero=numero/10;
        cont++;
    }
    return cont;

}
int main(){
    int numero;
    cout<<"ingrese el numero: "<<endl;
    cin>>numero;
    cout<<contadordedigitos(numero);



return 0;
}

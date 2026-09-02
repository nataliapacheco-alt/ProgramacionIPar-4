// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
//Verificación de Paridad: Diseñe una función booleana que determine si un número
//entero es par. La función debe retornar true si es par y false en caso contrario.
#include<iostream>
using namespace std;
bool numeroverificacion(int numero)
{
    if (numero%2==0){
        return true;
    }
    else
        return false;
}
int main(){
    int numero;
    cout<<"ingerse el numero: "<<endl;
    cin>>numero;
    cout<<numeroverificacion(numero);


return 0;
}

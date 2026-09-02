// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026
#include<iostream>
using namespace std;
int calculo(int velocidad, int tiempo)
{
    int resultado;
    resultado=velocidad*tiempo;
    return resultado;

}
int main(){
    int velocidad, tiempo;
    cout<<"ingrese la velocidad: "<<endl;
    cin>>velocidad;
    cout<<"ingrese el tiempo: "<<endl;
    cin>>tiempo;
    cout<<calculo(velocidad,tiempo);
return 0;
}

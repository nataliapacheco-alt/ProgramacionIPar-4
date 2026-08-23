
// Materia: Programación I, Paralelo 4
// Autor: Natalia Alina Pacheco Arteaga
// Carrera: comunicacion digital y multimedia
// Fecha de Creación: 23/08/2026
#include<iostream>
using namespace std;
int main (){
    int numero,suma=0;
    do{
    cout<<"ingrese el numero"; cin>>numero;
        if(numero!=0){
            suma=suma+numero;
        }
    } while( ((numero<20)||(numero>30))&&(numero!=0));
    cout<<"la suma total es: "<<suma<<endl;
return 0;
}

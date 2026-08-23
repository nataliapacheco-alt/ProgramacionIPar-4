// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 21/08/2026
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese
mismo rango [1-100], e indicarle al usuario si el número que digito es menor
o mayor al número aleatorio, así hasta que lo adivine. Y por ultimo
mostrarle el número de intentos que le llevo. */

int main (){
    srand(time(0));
    int numero,numeroaleatorio,sumaintentos;
    numeroaleatorio=(rand()%(100-1))+1;
    while (numero != numeroaleatorio){
            cout<<"ingresa el numero: " <<endl; cin>>numero;
            if (numero==numeroaleatorio){
                cout<<"hey adivinaste el numero"<<endl;
                }
                else {
                    if (numero>numeroaleatorio){
                    cout<<"hey subiste mucho"<<endl;
                    }

                    else {
                        if (numero<numeroaleatorio){
                        cout<<"hey bajaste mucho"<<endl;
                        }
                    }

                }
            sumaintentos++;
            }
    cout<<"intentaste: "<<sumaintentos<<"veces"<<endl;
return 0;
}


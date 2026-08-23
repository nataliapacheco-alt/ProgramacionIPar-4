// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 21/08/2026
#include<iostream>
using namespace std;
/*Escriba un programa para leer dos valores enteros distintos entre sí, de tal
forma que si el primer número es mayor al segundo, genere una serie
descendente, caso contrario, muestre una serie ascendente; el factor de
incremento o decremento es la unidad*/
int main (){
    int numero1,numero2;
    cout<<"ingrese el numero 1: "<<endl; cin>>numero1;
    cout<<"ingrese el numero 2: "<<endl; cin>>numero2;
    if (numero1==numero2){
        cout<<"son numeros iguales no se puede"<<endl;
    }
    else {
        if (numero1>numero2){
            for (int i= numero1; i>=numero2; i-- )
                cout<<i<<endl;
        }
        else {
            if (numero1<numero2){
                for (int i=numero1;i<=numero2;i++)
                    cout<<i<<endl;
            }
        }
    }


return 0;
}


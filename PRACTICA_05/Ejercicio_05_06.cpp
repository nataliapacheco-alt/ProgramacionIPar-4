
// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco
// Fecha creación: 08/09/2026
// Número de ejercicio: 6
/*6. Cree una función void calcularTiempo(int totalSegundos, int &horas, int &minutos, int
&segundos). La función recibe un número entero de segundos y debe modificar las
variables de referencia para que contengan las horas, minutos y segundos y desplegarlos
en el main().*/
void calculartiempo (int segundos, int &horas, int &minutos, int &s)
{
    horas=segundos/3600;
    minutos=(segundos%3600)/60;
    s=segundos%60;
}
#include<iostream>
using namespace std;
int main ()
{
    int h=0,m=0,s=0;
    int segundos;

    cout<<"ingerse los segundos: "<<endl;
    cin>>segundos;
    calculartiempo(segundos,h,m,s);
    cout<<"horas: "<<h<<endl<<"minutos: "<<m<<endl<<"segundos"<<s<<endl;;

    return 0;
}

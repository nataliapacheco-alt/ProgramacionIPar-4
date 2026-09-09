// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Fecha creación: 08/09/2026
// Número de ejercicio: 3
/*Cree una función CalcularPrecioTotal que reciba el precio base de un producto y un
porcentaje de impuesto. Defina el impuesto con un valor predeterminado del 13%
(correspondiente al IVA boliviano). Si el usuario solo envía el precio, la función debe
aplicar automáticamente el 13%.*/
#include<iostream>
using namespace std;
int calcularpreciototal (int precio)
{
    int preciototal,preciofinal;
    preciototal=precio*0.13;
    preciofinal=precio-preciototal;
    return preciofinal;
}
int main (){
    int precio;
    cout<<"ingrese el precio final :"<<endl;
    cin>>precio;
    cout<<"el impuesto es :"<<calcularpreciototal(precio)<<endl;


return 0;
}

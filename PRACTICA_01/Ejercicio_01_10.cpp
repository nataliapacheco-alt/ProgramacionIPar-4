
// Autor: Natalia Alina Pacheco Arteaga
// Carrera del estudiante:  Comunicacion digital y multimedia
// Fecha creación: 19/08/2026
//Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y
//mostrar el mes al que corresponde
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"1. Enero"<<endl;
    cout<<"2. febrero"<<endl;
    cout<<"3. Marzo"<<endl;
    cout<<"4. abril"<<endl;
    cout<<"5. mayo"<<endl;
    cout<<"6. junio"<<endl;
    cout<<"7. julio"<<endl;
    cout<<"8. Agosto"<<endl;
    cout<<"9. Septiemnbre"<<endl;
    cout<<"10. Octubre"<<endl;
    cout<<"11. noviembre"<<endl;
    cout<<"12. Diciembre"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"ingrese el numero: "<<endl; cin>>n;
    switch(n){
    case 1:
        cout<<"enero"<<endl;
        break;
    case 2:
        cout<<"febrero"<<endl;
        break;
    case 3:
        cout<<"marzo"<<endl;
        break;
    case 4:
        cout<<"abril"<<endl;
        break;
    case 5:
        cout<<"mayor"<<endl;
        break;
    case 6:
        cout<<"junio"<<endl;
        break;
    case 7:
        cout<<"julio"<<endl;
        break;
    case 8:
        cout<<"agosto"<<endl;
        break;
    case 9:
        cout<<"septiembre"<<endl;
        break;
    case 10:
        cout<<"octubre"<<endl;
        break;
    case 11:
        cout<<"noviembre"<<endl;
        break;
    case 12:
        cout<<"diciembre"<<endl;
        break;

    }



}

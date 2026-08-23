// Materia: Programación I, Paralelo 4
// Autor: Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicación digital y multimedia
// Fecha creación: 23/08/2026
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int producto, productoazar;
    float IVA,utilidad,productosinimpuesto,montototal,descuento,preciofinal,sumatotal=0,sumaiva=0,sumadescuento=0,productocaro=0,productobarato=10001;
    srand(time(0));
    cout<<"cuantos quieres: "<<endl; cin>>producto;
    for (int i=1;i<=producto;i++){
        productoazar=(rand()%(10000-10+1))+10;
        IVA=productoazar*0.13;
        sumaiva=sumaiva+IVA;
        utilidad=productoazar*0.87;
        productosinimpuesto=productoazar-(IVA-utilidad);
        montototal=IVA+utilidad;
        descuento = 0;
        if (montototal>2500){
                descuento=montototal*0.05;
                sumadescuento=sumadescuento+descuento;
        }
        preciofinal=montototal-descuento;
        sumatotal=sumatotal+preciofinal;

        if (preciofinal>productocaro){
            productocaro=preciofinal;
        }
        if (preciofinal<productobarato){
            productobarato=preciofinal;
        }

        cout <<productoazar<< endl;

    }
    cout<<"la suma total es: "<<sumatotal<<endl;
    cout<<"la suma de la iva es: "<<sumaiva<<endl;
    cout<<"dinero descontado es: "<<sumadescuento<<endl;
    cout<<"el producto mas barato es: "<<productobarato<<endl;
    cout<<"el producto mas caro es: "<<productocaro<<endl;


return 0;
}

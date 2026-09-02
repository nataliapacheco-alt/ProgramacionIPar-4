// Materia: Programación I, Paralelo 4
// Autor:Natalia Pacheco Arteaga
// Carrera del estudiante: Comunicacion digital y multimedia
// Fecha creación: 1/09/2026


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int numeroaleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}
void notas (int &nota1,int &nota2,int &nota3)
{
    nota1=numeroaleatorio(1,100);
    nota2=numeroaleatorio(1,100);
    nota3=numeroaleatorio(1,100);

};
int main(){
    srand(time(0));
    int n,nota1,nota2,nota3,promedio,notafinal;
    int alumnosreprobados=0,alumnosaprobados=0;
    int promedionotas;
    cout<<"ingrese la cantidad de estudiantes: "<<endl;
    cin>>n;
    for (int i;i<n;i++)
    {
    numeroaleatorio(1,100);
    notas(nota1,nota2,nota3);
    cout<<"estudiante: "<<endl;
    if (nota1>=60 && nota2>=60 && nota3>=60)
        {
            notafinal=numeroaleatorio(1,100);
        }
    else {
        cout<<"no puede dar su examen por que no habilito"<<endl;
        }


    }






return 0;
}

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
srand(time(0));
int numero;
int contadornumerospares=0,contadornumeroimpares=0,contadornumerosprimos=0,contadorsuma=0;
int n;
cout<<"ingrese cuantos numeros va a ingresar: "<<endl; cin>>n;
for (int i=1;i<=n;i++){
    numero=(rand()%(100-1))+1;
    cout<<numero<<endl;
    contadorsuma=contadorsuma+numero;
    if (numero%2==0){
            contadornumerospares++;
    }
    else {
            contadornumeroimpares++;
    }
    if ((numero == 2 || numero == 3 || numero == 5 || numero == 7) ||
        (numero > 1 && numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0 && numero % 7 != 0)) {
        contadornumerosprimos++;
        }

    }
    cout<<"el total de numeros pares es: "<<contadornumerospares<<endl;
    cout<<"el total de numeros impares es: "<<contadornumeroimpares<<endl;
    cout<<"el total de la suma es: "<<contadorsuma<<endl;
    cout<<"el total de los numeros primos es: "<<contadornumerosprimos<<endl;

return 0;
}


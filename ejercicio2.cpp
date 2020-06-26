#include <iostream>
using namespace std;
double prom(int suma, int x){
    double promedio;
    promedio=suma/x;
    return promedio;
}
int main(){
    int x, valor, suma=0;
    cout<<"Ingrese la cantidad de datos que desea tener"<<endl;
    cin>>x;
    int a[x];
    for (int i = 0; i <x; i++)
    {
        cout<<"Ingrese los valores"<<endl;
        cin>>valor;
        a[i]=valor;
        suma=suma+a[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout<<a[i];
    }
    cout<<"El promedio de los numeros es"<<prom(suma,x)<<endl;
    return 0;
}
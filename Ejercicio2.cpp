#include<iostream>
using namespace std;
int main(){
    int n, s, A[10], prom;
    cout<<"Ingrese la cantidad de numeros que ingresara: ";
    cin>>n;
    s=0;
    for(int i=0; i<n; i++){
        cout<<"Ingrese un numero: ";
        cin>>A[i];
        s=s+A[i];
    }
    prom=s/n;
    cout<<"Los numeros mayores al promedio son: "<<endl;
    for(int i=0; i<n; i++){
        if(A[i]>prom){
            cout<<A[i]<<endl;
        }
    }

    return 0;
}
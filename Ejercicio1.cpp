#include<iostream>
using namespace std;
int main(){
    int n, A[20], max;
    cout<<"Ingrese la cantidad de numeros que ingresara: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Ingrese un numero: ";
        cin>>A[i];
    }
    max=A[0];
    for(int i=1; i<n; i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"El numero mayor es: "<<max;
    return 0;
}
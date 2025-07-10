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
    cout<<"--------------------------------------"<<endl;
    cout<<"El numero mayor es: "<<max<<endl;

    for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1;j++){
        if(A[j]>A[j+1]){
            int inter=A[j];
            A[j]=A[j+1];
            A[j+1]=inter;
        }
    }
}
cout<<"Numeros ordenados de menor a mayor: ";
for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
}
    return 0;
}
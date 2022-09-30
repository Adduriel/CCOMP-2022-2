#include <iostream>
using namespace std;

int suma_mod(int a, int b, int mod){
    int suma = (a+b)%mod;
    cout<<"La suma es "<<suma<<endl;
}

int resta_mod(int a, int b, int mod){
    int resta = (a-b)%mod;
    cout<<"La resta es "<<resta<<endl;
}
int mcd(int a, int mod) {
    if (mod == 0) return a;
    return mcd(mod, a % mod);
}
int inverso_prueba(int a, int mod){
    if (mcd(a,mod) != 1){
     return false;
    }
    for(int x=0; x<mod;x++){
        if((a*x-1)%mod==0){
            return x;
        }
    }
}

int main(){
    int Consulta;
    int a,b,mod;
    cout<<"CALCULADORA MOLECULAR"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1.- Suma "<<endl;
    cout<<"2.- Resta "<<endl;
    cout<<"3.- Inverso"<<endl;
    cout<<"Ingrese su consulta:"<<endl;
    cin>>Consulta;
    if(Consulta == 1){
        cout<<"Ingrese a: "<<endl;
        cin>>a;
        cout<<"Ingrese b: "<<endl;
        cin>>b;
        cout<<"Ingrese mod: "<<endl;
        cin>>mod;
        suma_mod(a,b,mod);
    }
    else if(Consulta == 2){
        cout<<"Ingrese a: "<<endl;
        cin>>a;
        cout<<"Ingrese b: "<<endl;
        cin>>b;
        cout<<"Ingrese mod: "<<endl;
        cin>>mod;
        resta_mod(a,b,mod);
    }
    else if(Consulta == 3){
        cout<<"Ingrese a: "<<endl;
        cin>>a;
        cout<<"Ingrese mod: "<<endl;
        cin>>mod;
        int inv= inverso_prueba(a,mod);
        if(inv){
            cout<<"Inverso de "<<a<<" cuando su mod es "<<mod<<": "<<inv<<endl;
        }
        else{
            cout<<"No existe el inverso de "<<a<<"cuando su modulo es "<<mod<<endl;
        }
    }
    else{
        cout<<"Ingrese un valor correcto";
    }
    return 0;
}
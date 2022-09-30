#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

void encriptar(int A) {
    ifstream datos;
    ofstream file;
    string info;
    int n;

    datos.open("original.txt", ios::in);
    file.open("encriptado.txt", ios::out);

    while (!datos.eof()) {
        getline(datos, info);
        n = info.length();
        for (int i = 0; i < n; i++)
            file << char((int(info[i]) * A) % 256);
    }

    datos.close();
    file.close();
}


void desencriptar(int A_inv) {
    ofstream file;
    ifstream datos;
    string info;

    int n;

    file.open("desencriptado.txt", ios::out);
    datos.open("encriptado.txt", ios::in);

    while (!datos.eof()) {
        getline(datos, info, '/n');
        n = info.length();
        for (int i = 0; i < n; i++)
            file << char((int(info[i])*A_inv) % 256);
    }

    datos.close();
    file.close();
}

int main(){
    int clave_priv, clave_pub, opcion;
    cout<<"ingrese la accion que desea hacer: "<<endl;
    cout<<"1. Encriptar"<<endl;
    cout<<"2. Desencriptar"<<endl;
    cin>>opcion;
    if(opcion == 1){
        cout<<"Ingresa tu clave privada:"<<endl;
        cin>>clave_priv;
        if(inverso_prueba(clave_priv,256) == 0){
            cout<<"ingresa un nuevo valor, este no tiene inverso";
            main();
        }
        else{
            cout<<"Encriptado con exito"<<endl;
            cout<<"Tu clave publica es: "<<inverso_prueba(clave_priv,256);
            encriptar(clave_priv);
            main();
        }
    }
    else if(opcion == 2){
        cout<<"Ingresa tu clave publica"<<endl;
        cin>>clave_pub;
        desencriptar(clave_pub);
    }
}
#include <iostream>
using namespace std;

int main() {
    double monto; 
    cout << "Ingrese una cantidad de dinero: ";
    cin >> monto; 
    cout << "Usted a ingresado: " << monto << " soles" << "\n";
    cout << "\n";

    if(monto >= 200){
        int doscientos = monto/200;
        cout << "Billetes de doscientos: "<< doscientos << "\n";    
        monto = monto - (doscientos*200);
        }
    if(monto >= 100){
        int cien = monto/100;
        cout << "Billetes de cien: " << cien << "\n";
        monto = monto - (cien*100);
        }

    if(monto >= 50){
        int cincuenta = monto/50;
        cout << "Billetes de cincuenta: " <<cincuenta << "\n";
        monto = monto - (cincuenta*50);
        }
    if(monto >= 20){
        int veinte = monto/20;
        cout << "Billetes de veinte: " << veinte << "\n";
        monto = monto - (veinte*20);
        }
    if(monto >= 10){
        int diez = monto/10;
        cout << "Billetes de diez: " << diez << "\n";
        monto = monto - (diez*10);
        }
    if(monto >= 5){
        int cinco = monto/5;
        cout << "Monedas de cinco: " << cinco << "\n";
        monto = monto - (cinco*5);
        }
    if(monto >= 2){
        int dos = monto/2;
        cout << "Monedas de dos: " << dos << "\n";
        monto = monto - (dos*2);
        }
    if(monto >= 1){
        int uno = monto/1;
        cout << "Monedas de dos: " << uno << "\n";
        monto = monto - (uno*1);
        }
    if(monto >= 2){
        int dos = monto/2;
        cout << "Monedas de dos: " << dos << "\n";
        monto = monto - (dos*2);
        }
    if(monto >= 0.5){
    int cincuentacentimos = monto/0.5;
    cout << "Monedas de un cincuenta centimos: " << cincuentacentimos << "\n";
    monto = monto - (cincuentacentimos*0.5);
    }
    if(monto >= 0.2 ){
        int veintecentimos = monto/0.2;
        cout << "Monedas de un veinte centimos: " << veintecentimos << "\n";
        monto = monto - (veintecentimos*0.2);
        }
    if(monto < 0.2 && monto > 0.1){
        int diezcentimos = monto/0.1;
        cout << "Monedas de un diez centimos: " << diezcentimos << "\n";
        monto = monto - (diezcentimos*0.1);
        }
    if(monto > 0){
    cout << "\n";
    cout << "Nos quedamos sin vuelto...." << "\n";
    cout << "Tome un caramelito c:" << "\n"; 
        }
}

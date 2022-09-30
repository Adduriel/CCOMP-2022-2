#include <iostream> //alt + 60 = <  ;  alt + 62 = >
using namespace std;


int zeller(int ano,int mes, int dia){

    int a = (14-mes)/12;
    int y = ano - a;
    int m = mes + 12*a - 2;

    int d = (dia + y+ y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;


}

bool Bisiesto(int a){
    if(a%4 != 0) return false;
    else if(a%100 != 0) return true;
    else if(a%400 != 0) return false;
    return true;
}

int CalcularDias(int mes, int numano){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;
    }
    if(mes == 2){
    if(Bisiesto(numano) == true) return 29;
    else return 28;
    }
    return 30;
}

int main(){
    
    cout << "Ingrese el anio que desea saber: ";
    int numano;
    cin >> numano;
    string m[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto",
    "Septiembre","Octubre","Noviembre","Diciembre"};

    for (int mes=1;mes<=12; mes++){
        cout<<"Mes : "<<m[mes-1]<<endl;
        cout<<"\n";
        cout<<"Dom Lun Mar Mie Jue Vie Sab"<<endl;
        cout<<"\n";
        int x = zeller(numano,mes,1);
        for(int i = 0 ; i < x; i++){
            cout<<"    ";
        }
        int dias_mes_actual = CalcularDias(mes,numano);
        for(int dia = 1; dia <= dias_mes_actual; dia++){
            if(dia < 10) cout<<dia<<"   ";
            else cout<<dia<<"  ";
            x++;
            if(x % 7 == 0) cout<<endl;
        }
        cout<<"\n";
        cout<<endl;
        cout<<"\n";
    }

    return 0;
}
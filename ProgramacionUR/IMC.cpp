#include<iostream>
#include<math.h>

using namespace std;

float peso=0;
float estatura=0;
float imc=0;

int main()
{
    cout<<"___________________________________"<<endl;
    cout<<"| Calculadora de índice de masa corporal"<<endl;
    cout<<"| Por favor ingrese su peso (Kg):"<<endl;
    cin>>peso;
    cout<<"| Por favor ingrese su estatura (cm)):"<<endl;
    cin>>estatura;
    imc=peso/pow(estatura/100,2);
    cout<<"Su IMC es: "<<imc<<endl;
    if(imc<18.5){
        cout<<"| Usted está en el rango de: Bajo peso"<<endl;
    }else if(imc>=18.5 && imc<25){
        cout<<"| Usted está en el rango de: Peso normal"<<endl;
    }else if(imc>=25&&imc<30){
        cout<<"| Usted está en el rango de: Sobrepeso"<<endl;
    }else{cout<<"| Usted está en el rango de: Obesidad"<<endl;}
    
    return 0;
}

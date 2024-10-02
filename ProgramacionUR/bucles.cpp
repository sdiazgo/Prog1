#include<iostream>

using namespace std;

//Problema cuenta bancaria
/*int main()
{
    int intentos=0;
    int contrasena=1234;
    int cont_ingresada=0;
    while((cont_ingresada!=contrasena) && (intentos<3)){
        cout<<"Ingrese la contraseña de su cuenta bancaria"<<endl;
        cin>>cont_ingresada;
        intentos++;
        if(cont_ingresada!=contrasena){cout<<"Clave incorrecta, tiene "<<3-intentos<<" intento(s) más."<<endl;}
    }
    if(cont_ingresada==contrasena){cout<<"Bienvenido a su cuenta."<<endl;}else{cout<<"Su cuenta ha sido bloqueada"<<endl;}
}*/

//Factorial
int main(){
    int n=1;
    unsigned long factorial=1;
    
    cout<<"Calculadora de n!"<<endl;
    cout<<"Ingrese el valor de n"<<endl;
    cin>>n;
    
    if(n>1){
        while(n>1){
            factorial=factorial*n;
            n=n-1;
        }
    cout<<"n!="<<factorial<<endl;
    }else if(n>=0){cout<<"n!="<<factorial<<endl;
    }else{cout<<"El factorial no está definido para números negativos"<<endl;}
}
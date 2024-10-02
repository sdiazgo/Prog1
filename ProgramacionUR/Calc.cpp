#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Bienvenido a la calculadora!)"<<endl;
    float a,b,c;
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;
    
    int suma = a+b;
    int resta = a-b;
    int prod =a*b;
    int power = pow(a,b);
    int sroot = sqrt(a);
    float hipotenusa= sqrt(pow(a,2)+pow(b,2));
    cout<<"a+b="<<suma<<endl;
    cout<<"a-b="<<resta<<endl;
    cout<<"a*b="<<prod<<endl;
    /*float div=a/b;
    cout<<"a/b="<<div<<endl;*/
    float div;
    if(b!=0){
        div=float(a/b);
        cout<<"a/b="<<div<<endl;
    }
    else{cout<<"No se puede dividir entre 0!!!"<<endl;}
    cout<<"a^b="<<power<<endl;
    cout<<"sqrt(a)="<<sroot<<endl;
    cout<<"hipotenusa con catetos de longitud a y b= "<<hipotenusa<<endl;
    float f_cuad1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
    float f_cuad2= (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
    cout<<"Raíces fórmula cuadrática:"<<f_cuad1<<endl<<f_cuad2<<endl;
    return 0;
}

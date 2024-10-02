#include<iostream>

using namespace std;
int precio_base=15000;
int precio_carne=5000;
int precio_bacon=3000;
int precio_pepinillos=1500;
int precio_verduras=2000;
int subtotal=0;
float total=0;

int carnes=0;
int bacon=0;
int pepinillos=0;
int verduras=0;

int choice=0;

int main()
{
    cout<<"___________________________________"<<endl;
    cout<<"| ¡Bienvenido a McDonald's!"<<endl;
    cout<<"| Por favor ingrese sus adicionales:"<<endl;
    cout<<"| ¿Desea añadir carnes extra?:"<<endl<<"| 1. Sí"<<endl<<"| 2. No"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"| ¿Cuántas carnes desea añadir?:"<<endl;
        cin>>carnes;
    }
    choice=0;
        cout<<"| ¿Desea añadir tocineta extra?:"<<endl<<"| 1. Sí"<<endl<<"| 2. No"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"| ¿Cuánta tocineta desea añadir?:"<<endl;
        cin>>bacon;
    }
    choice=0;
        cout<<"| ¿Desea añadir pepinillos extra?:"<<endl<<"| 1. Sí"<<endl<<"| 2. No"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"| ¿Cuántas porciones de pepinillos desea añadir?:"<<endl;
        cin>>pepinillos;
    }
    choice=0;
        cout<<"| ¿Desea añadir verduras extra?:"<<endl<<"| 1. Sí"<<endl<<"| 2. No"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"| ¿Cuántas porciones de verduras desea añadir?:"<<endl;
        cin>>verduras;
    }
    choice=0;
    subtotal=precio_base+(carnes*precio_carne)+(bacon*precio_bacon)+(pepinillos*precio_pepinillos)+(verduras*precio_verduras);
    cout<<"| El subtotal de su pedido es: "<<subtotal<<endl;
    total=subtotal*1.19;
    cout<<"| El total de su pedido es: "<<total<<endl;
    return 0;
}

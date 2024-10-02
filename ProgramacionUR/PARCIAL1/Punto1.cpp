#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int choice;
    int kilometros_viaje=0;
    int puntos=0;
    int estatus= 0;
    float precio_tiquete=0.0;
    float descuento=0.0;
    cout<<fixed<<setprecision(2);
    cout<<"Bienvenidos a Aerolíneas Nueva Scadta"<<endl;
    cout<<"Ingrese la distancia de su vuelo"<<endl;
    cin>>kilometros_viaje;
    
    cout<<"Ingrese su estatus: 0: no tiene, 1: Bronce, 2: Plata, 3: Oro"<<endl;
    cin>>estatus;
    if(estatus==0){
        precio_tiquete=(10000*kilometros_viaje)*1.25;
        cout<<"El valor de su tiquete es: "<<precio_tiquete<<endl;
    }else if(estatus==1){
        cout<<"Ingrese cuántos puntos tiene:"<<endl;
        cin>>puntos;
        precio_tiquete=(9000*kilometros_viaje)*1.25;
        cout<<"El valor actual de su tiquete es: "<<precio_tiquete<<endl;
        cout<<"¿Desea pagar con puntos?: 0:No, 1:Sí"<<endl;
        cin>>choice;
        if(choice==1){
            descuento=puntos*2000;
            puntos=0;
            precio_tiquete=precio_tiquete - descuento;
            if(precio_tiquete>0){
                //puntos+=kilometros_viaje;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }else{
                puntos=(precio_tiquete*-1)/2000;
                precio_tiquete=0;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }
        }else{
            puntos+=kilometros_viaje;
            cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
        }
        
    }else if(estatus==2){
        cout<<"Ingrese cuántos puntos tiene:"<<endl;
        cin>>puntos;
        precio_tiquete=(7500*kilometros_viaje)*1.25;
        cout<<"El valor actual de su tiquete es: "<<precio_tiquete<<endl;
        cout<<"¿Desea pagar con puntos?: 0:No, 1:Sí"<<endl;
        cin>>choice;
        if(choice==1){
            descuento=puntos*2000;
            puntos=0;
            precio_tiquete=precio_tiquete - descuento;
            if(precio_tiquete>=0){
                //puntos+=kilometros_viaje*2;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }else{
                puntos=(precio_tiquete*-1)/2000;
                precio_tiquete=0;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }
        }else{
            puntos+=kilometros_viaje*2;
            cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
        }
        
    }else if(estatus==3){
        cout<<"Ingrese cuántos puntos tiene:"<<endl;
        cin>>puntos;
        precio_tiquete=(6000*kilometros_viaje)*1.25;
        cout<<"El valor actual de su tiquete es: "<<precio_tiquete<<endl;
        cout<<"¿Desea pagar con puntos?: 0:No, 1:Sí"<<endl;
        cin>>choice;
        if(choice==1){
            descuento=puntos*2000;
            puntos=0;
            precio_tiquete=precio_tiquete - descuento;
            if(precio_tiquete>=0){
                //puntos+=kilometros_viaje*4;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }else{
                puntos=(precio_tiquete*-1)/2000;
                precio_tiquete=0;
                cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
            }
        }else{
            puntos+=kilometros_viaje*4;
            cout<<"El valor final de su tiquete es: "<<precio_tiquete<<" y tiene "<<puntos<<" puntos disponibles."<<endl;
        }
        
    }
    
    return 0;
}

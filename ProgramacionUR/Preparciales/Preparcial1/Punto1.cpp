#include<iostream>

using namespace std;

int main()
{
    int semilla = 5643;
    srand(semilla);
    
    int dado1 = 0; 
    int dado2 = 0; 
    int suma_dados = 0;
    int tiro_inicial = 0;
    char c;
    
    cout<<"Ingresa un caracter para tirar los dados"<<endl;
    cin>>c;
    dado1 = (rand()%6) + 1;
    dado2 = (rand()%6) + 1;
    suma_dados = dado1 + dado2;
    cout<<"Sacaste "<<suma_dados<<endl;
    tiro_inicial = suma_dados;
    
    if(suma_dados==2 || suma_dados==3 || suma_dados==12){
        cout<<"Perdiste!"<<endl;
    }else if(suma_dados==7 || suma_dados==11){
        cout<<"Ganaste!"<<endl;
    }else{
        cout<<"Fase de tiros secundarios"<<endl;
        cout<<"Tiro 1"<<endl;
        cout<<"Ingresa un caracter para tirar los dados"<<endl;
        cin>>c;
        dado1 = (rand()%6) + 1;
        dado2 = (rand()%6) + 1;
        suma_dados = dado1 + dado2;
        cout<<"Sacaste "<<suma_dados<<endl;
        
        if(suma_dados==7){
            cout<<"Perdiste!"<<endl;
        }else if(suma_dados==tiro_inicial){
            cout<<"Ganaste!"<<endl;
        }else{
            cout<<"Tiro 2"<<endl;
            cout<<"Ingresa un caracter para tirar los dados"<<endl;
            cin>>c;
            dado1 = (rand()%6) + 1;
            dado2 = (rand()%6) + 1;
            suma_dados = dado1 + dado2;
            cout<<"Sacaste "<<suma_dados<<endl;
            
            if(suma_dados==7){
                cout<<"Perdiste!"<<endl;
            }else if(suma_dados==tiro_inicial){
                cout<<"Ganaste!"<<endl;
            }else{
                cout<<"Tiro 3"<<endl;
                cout<<"Ingresa un caracter para tirar los dados"<<endl;
                cin>>c;
                dado1 = (rand()%6) + 1;
                dado2 = (rand()%6) + 1;
                suma_dados = dado1 + dado2;
                cout<<"Sacaste "<<suma_dados<<endl;
                
                if(suma_dados==7){
                    cout<<"Perdiste!"<<endl;
                }else if(suma_dados==tiro_inicial){
                    cout<<"Ganaste!"<<endl;
                }else{
                    cout<<"Tiro 4"<<endl;
                    cout<<"Ingresa un caracter para tirar los dados"<<endl;
                    cin>>c;
                    dado1 = (rand()%6) + 1;
                    dado2 = (rand()%6) + 1;
                    suma_dados = dado1 + dado2;
                    cout<<"Sacaste "<<suma_dados<<endl;
                    if(suma_dados==7){
                        cout<<"Perdiste!"<<endl;
                    }else if(suma_dados==tiro_inicial){
                        cout<<"Ganaste!"<<endl;
                    }else{
                        cout<<"Lanzaste 5 veces. Perdiste por w.";
                    }
                }
            }
        }
    }
    
    return 0;
}

#include<iostream>
#include<algorithm>

using namespace std;

int num_elegido;
int num_guess;
int choice;
srand(time(0));

int main()
{
    cout<<"Adivinador de números"<<endl;
    cout<<"Ingrese un número entre 0 y 10"<<endl;
    cin>>num_elegido;
    if(num_elegido>10){
        num_elegido=10;
    }else if(num_elegido<0){
        num_elegido=0;
    }
    num_guess=rand()%11;
    if(num_guess==num_elegido){
        cout<<"Adiviné tu número, es: "<<num_guess<<endl;
    }else{
        cout<<"No adiviné, ¿tu número es menor o igual a 5? No=0, Sí=1"<<endl;
        cin>>choice;
        if(choice==1){
            num_guess=rand()%6;
            if(num_guess==num_elegido){
                cout<<"Adiviné tu número, es: "<<num_guess<<endl;
            }else{
                cout<<"No adiviné, ¿tu número es menor a 3? No=0, Sí=1"<<endl;
                cin>>choice;
                if(choice==1){
                    num_guess=rand()%3;
                    if(num_guess==num_elegido){
                        cout<<"Adiviné tu número, es: "<<num_guess<<endl;
                    }else{
                        cout<<"No adiviné, ¿tu número es menor a 2? No=0, Sí=1"<<endl;
                        cin>>choice;
                        if(choice==1){
                            num_guess=rand()%2;
                            if(num_guess==num_elegido){
                                cout<<"Adiviné tu número, es: "<<num_guess<<endl;
                            }else{
                                num_guess=(num_guess+1)%2;
                                cout<<"Adiviné tu número, es: "<<num_guess<<endl;
                            }
                        }else{
                            num_guess=2;
                            cout<<"Adiviné tu número, es: "<<num_guess<<endl;
                        }
                    }
                }else{
                    num_guess=(rand()%3)+3;
                }
            }
        }else{
            num_guess=(rand()%5)+6;
            if(num_guess==num_elegido){
                cout<<"Adiviné tu número, es: "<<num_guess<<endl;
            }
        }
    }
    
    return 0;
}

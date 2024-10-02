#include<iostream>

using namespace std;

int main()
{
    int num_secreto=0;
    int guess=0;
    int puntos=0;
    int famas=0;
    int dig1_secreto=0;
    int dig2_secreto=0;
    int dig1_guess=0;
    int dig2_guess=0;
    int turnos=0;
    bool encontrado=false;
    
    cout<<"¡Bienvenido a Punto-Fama!"<<endl;
    cout<<"Jugador 1, por favor ingresa tu número secreto."<<endl;
    cin>>num_secreto;
    if(num_secreto>=10 && num_secreto<=99){
        puntos=0;
        famas=0;
        dig1_secreto=num_secreto/10;
        dig2_secreto=num_secreto%10;
        cout<<"Jugador 2, ingresa tu primer intento."<<endl;
        cin>>guess;
        if(guess>=10 && guess<=99&& !encontrado && turnos<=5){
        turnos+=1;
        if(num_secreto==guess){
            cout<<"¡Has encontrado el número!"<<endl;
            encontrado=true;
        }else{
            //Comparar dígito a dígito
            dig1_guess=guess/10;
            dig2_guess=guess%10;
            if(dig1_guess==dig1_secreto){famas+=1;}else{if(dig1_guess==dig2_secreto){puntos+=1;}}
            if(dig2_guess==dig1_secreto){puntos+=1;}else{if(dig2_guess==dig2_secreto){famas+=1;}}
            if(famas>0){cout<<"Usted tiene una fama."<<endl;
            }else if(puntos>0){cout<<"Usted tiene "<<puntos<<"puntos"<<endl;}}}
        if(!encontrado && turnos<=5){
        puntos=0;
        famas=0;
        cout<<"Jugador 2, ingresa tu segundo intento."<<endl;
        cin>>guess;
        if(guess>=10 && guess<=99 ){
        turnos+=1;
        if(num_secreto==guess){
            cout<<"¡Has encontrado el número!"<<endl;
            encontrado=true;
        }else{
            //Comparar dígito a dígito
            dig1_guess=guess/10;
            dig2_guess=guess%10;
            if(dig1_guess==dig1_secreto){famas+=1;}else{if(dig1_guess==dig2_secreto){puntos+=1;}}
            if(dig2_guess==dig1_secreto){puntos+=1;}else{if(dig2_guess==dig2_secreto){famas+=1;}}
            if(famas>0){cout<<"Usted tiene una fama."<<endl;
            }else if(puntos>0){cout<<"Usted tiene "<<puntos<<"puntos"<<endl;}}}}
            if(!encontrado && turnos<=5){
        puntos=0;
        famas=0;
        cout<<"Jugador 2, ingresa tu tercer intento."<<endl;
        cin>>guess;
        if(guess>=10 && guess<=99 ){
        turnos+=1;
        if(num_secreto==guess){
            cout<<"¡Has encontrado el número!"<<endl;
            encontrado=true;
        }else{
            //Comparar dígito a dígito
            dig1_guess=guess/10;
            dig2_guess=guess%10;
            if(dig1_guess==dig1_secreto){famas+=1;}else{if(dig1_guess==dig2_secreto){puntos+=1;}}
            if(dig2_guess==dig1_secreto){puntos+=1;}else{if(dig2_guess==dig2_secreto){famas+=1;}}
            if(famas>0){cout<<"Usted tiene una fama."<<endl;
            }else if(puntos>0){cout<<"Usted tiene "<<puntos<<"puntos"<<endl;}}}}
            if(!encontrado && turnos<=5){
        puntos=0;
        famas=0;
        cout<<"Jugador 2, ingresa tu cuarto intento."<<endl;
        cin>>guess;
        if(guess>=10 && guess<=99 ){
        turnos+=1;
        if(num_secreto==guess){
            cout<<"¡Has encontrado el número!"<<endl;
            encontrado=true;
        }else{
            //Comparar dígito a dígito
            dig1_guess=guess/10;
            dig2_guess=guess%10;
            if(dig1_guess==dig1_secreto){famas+=1;}else{if(dig1_guess==dig2_secreto){puntos+=1;}}
            if(dig2_guess==dig1_secreto){puntos+=1;}else{if(dig2_guess==dig2_secreto){famas+=1;}}
            if(famas>0){cout<<"Usted tiene una fama."<<endl;
            }else if(puntos>0){cout<<"Usted tiene "<<puntos<<"puntos"<<endl;}}}}
            if(!encontrado && turnos<=5){
        puntos=0;
        famas=0;
        cout<<"Jugador 2, ingresa tu quinto intento."<<endl;
        cin>>guess;
        if(guess>=10 && guess<=99 ){
        turnos+=1;
        if(num_secreto==guess){
            cout<<"¡Has encontrado el número!"<<endl;
            encontrado=true;
        }else{cout<<"Has perdido"<<endl;}}}
        
    }else{
        cout<<"Número inválido, gracias por participar."<<endl;
    }
    return 0;
}

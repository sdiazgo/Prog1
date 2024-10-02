#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    float notas[5];
    float total=0;
    float promedio;
    for(int i =0;i<5;i++){
        cout<<"Ingrese la nota del estudiante "<<i+1<<":"<<endl;
        cin>>notas[i];
    }
    
    for(int i=0;i<5;i++){
        total+=notas[i];
        //cout<<total<<endl;
    }
    promedio=total/5;
    
    for(int i =0;i<5;i++){
        cout<<"La nota del estudiante "<<i+1<<" es:"<<notas[i]<<endl;
    }
    cout<<"El promedio de notas de los estudiantes es: "<<promedio<<endl;  
    return 0;
}


// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<algorithm>

using namespace std;

int choice=0;
int n_semanas=0;
int n_hijos=0;

int main()
{
    cout<<"Calculadora de semanas de pensión"<<endl;
    cout<<"Ingrese su sexo. F=0, M=1"<<endl;
    cin>>choice;
    if(choice==1){
        n_semanas=1300;
        cout<<"Usted necesita "<<n_semanas<<" semanas para pensionarse."<<endl;
    }
    else{
        cout<<"¿Usted tiene hijos? No = 0, Sí = 1"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"¿Cuántos hijos tiene?"<<endl;
            cin>>n_hijos;
        }
        n_hijos=min(n_hijos,3);
        n_semanas=1000-(n_hijos*50);
        cout<<"Usted necesita "<<n_semanas<<" semanas para pensionarse."<<endl;
    }
    return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x=0;
    float y=0;
    float z=0;
    
    cout<<"Ingresa el valor de x"<<endl;
    cin>>x;
    cout<<"Ingresa el valor de y"<<endl;
    cin>>y;
    
    float raiz=0;
    raiz = sqrt(x+(pow(y,2)/(3+x)));
    float resta=0;
    resta=(pow(x,2)/(pow(y,3)+x))-5*(sqrt(3*x));
    z=raiz-resta;
    cout<<"El resultado es: "<<z<<endl;
    return 0;
}

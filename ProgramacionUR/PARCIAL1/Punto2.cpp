#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<setprecision(14);
    float numerador_total, num_raiz, denominador_total, denom_num, denom_denom, z;
    float x=0.0;
    float y=0.0;
    
    cout<<"Ingrese x:"<<endl;
    cin>>x;
    cout<<"Ingrese y:"<<endl;
    cin>>y;
    
    num_raiz=sqrt(pow(y,x)+3)/8;
    numerador_total=sqrt(pow(x,y)*num_raiz);
    
    denom_num=12*y-2*pow(x,2+y);
    denom_denom=(32*y-5)/pow(x*y,2);
    denominador_total=pow(denom_num/denom_denom,3);
    z=pow(numerador_total/denominador_total,3);
    cout<<"z: "<<z<<endl;
    return 0;
}

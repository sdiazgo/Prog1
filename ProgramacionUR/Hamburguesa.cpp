
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int hambs, carnes, queso, bacon, pepi, verduras, subtotal,base;
    float total;
    base=15000;
    cout<<"_______________________________________________"<<endl;
    cout<<"|Bienvenido a McDonald's"<<endl;
    cout<<"|Por favor ingrese la cantidad de hamburguesas:"<<endl;
    cin>>hambs;
    cout<<"|Por favor ingrese la cantidad de carnes EXTRA (por hamburguesa):"<<endl;
    cin>>carnes;
    cout<<"|Por favor ingrese la cantidad de queso (por hamburguesa):"<<endl;
    cin>>queso;
    cout<<"|Por favor ingrese la cantidad de tocineta (por hamburguesa):"<<endl;
    cin>>bacon;
    cout<<"|Por favor ingrese la cantidad de pepinillos (por hamburguesa):"<<endl;
    cin>>pepi;
    cout<<"|Por favor ingrese la cantidad de verduras (por hamburguesa):"<<endl;
    cin>>verduras;
    subtotal=base+((carnes)*5000)+((queso)*2500)+(bacon*3000)+(pepi*1000)+(verduras*2500);
    total=subtotal+(subtotal*0.19);
    cout<<"|El subtotal de su pedido es:"<<subtotal<<endl;
    cout<<"|El total de su pedido es:"<<total<<endl;
    return 0;
}

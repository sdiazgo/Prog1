
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <iomanip>  

using namespace std;

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    //Variables Cálculo Rubro Talento Humano
    int numInvestigadores;
    int numAsistentes;
    int numHorasSemInv;
    int numHorasSemAsis;
    double valorHorasInv;
    double valorHorasAsis;
    int numMeses;
    double totalInv = 0;
    double totalAsis = 0;
    double totalTalento = 0;
    
    //Variables Cálculo viáticos
    int numViajes,numPersonas,numDias;
    double costoTiquete,costoHospedaje,totalViaticos;
    
    //Variables Cálculo Rubro Equipos
    int numEquipos;
    double valorUnitEquipo;
    double totalEquipos = 0;
    
    double valorTotalProyecto=0;
    
    
    cout<<"Bienvenido a Proyect-o-Matic V.0.86"<<endl;
    cout<<"1. Cálculo de rubro de talento humano"<<endl;
    cout<<"Ingrese el número de meses del proyecto: ";
    cin>>numMeses;
    cout<<"Ingrese el número de investigadores: ";
    cin>>numInvestigadores;
    cout<<"Ingrese el número de horas semanales de los investigadores: ";
    cin>>numHorasSemInv;
    cout<<"Ingrese el valor de las horas de los investigadores: ";
    cin>>valorHorasInv;
    totalInv = numMeses * 4 * numHorasSemInv * valorHorasInv * numInvestigadores;
    
    cout<<"Ingrese el número de asistentes: ";
    cin>>numAsistentes;
    cout<<"Ingrese el número de horas semanales de los asistentes: ";
    cin>>numHorasSemAsis;
    cout<<"Ingrese el valor de las horas de los asistentes: ";
    cin>>valorHorasAsis;
    totalAsis = numMeses * 4 * numHorasSemAsis * valorHorasAsis * numAsistentes;
    
    totalTalento = totalInv + totalAsis;
    cout<<"El valor del rubro de talento humano es: "<<totalTalento<<endl;
    
    cout<<"2. Cálculo de viáticos"<<endl;
    cout<<"Ingrese el número de viajes: ";
    cin>>numViajes;
    cout<<"Ingrese el número de personas por viaje: ";
    cin>>numPersonas;
    cout<<"Ingrese el costo UNITARIO del tiquete: ";
    cin>>costoTiquete;
    cout<<"Ingrese el número de días que dura el viaje: ";
    cin>>numDias;
    cout<<"Ingrese el costo del hospedaje por día: ";
    cin>>costoHospedaje;
    
    totalViaticos=numViajes*numPersonas*((2*costoTiquete)+(numDias*costoHospedaje));
    cout<<"El valor de los viáticos es: "<<totalViaticos<<endl;
    
    cout<<"3. Cálculo de rubro de equipos"<<endl;
    
    cout<<"Ingrese el número de equipos: ";
    cin>>numEquipos;
    cout<<"Ingrese el valor unitario de los equipos: ";
    cin>>valorUnitEquipo;

    totalEquipos = numEquipos * valorUnitEquipo;
    cout<<"El valor del rubro de equipos es: "<<totalEquipos<<endl;
    
    
    valorTotalProyecto = totalTalento + totalEquipos + totalViaticos;
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;
    
    double ganancia = 0.3;
    /*valorTotalProyecto = valorTotalProyecto*1.3;
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;
    valorTotalProyecto = totalTalento + totalEquipos;*/
    valorTotalProyecto = valorTotalProyecto/(1.0-ganancia);
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;
    valorTotalProyecto = valorTotalProyecto*1.21;
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;
    
    
    return 0;
}
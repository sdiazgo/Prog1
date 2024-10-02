
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<string>

using namespace std;
int factorial(int n){
    int fact=1;
    for(int i = 1;i<=n; i++){
        fact *= i;
    }
    return fact;
}

int combinatoria(int n, int m){
    int comb = factorial(n)/(factorial(n-m)*factorial(m));
    return comb;
}

void iniciar_vector(int vect[], int tamano){
    for(int i=0; i<tamano;i++){
        vect[i]=0;
    }
}

void generar_partidos(int e_local[], int e_visita[], int g_local[], int g_visita[], int n_equipos){
    int gol_loc =0;
    int gol_visit=0;
    int partidos =0;
    for(int i = 0; i < n_equipos; i++){
        for(int j = 0; j < n_equipos; j++){
            if(i !=j){
                gol_loc= rand()%5;
                gol_visit= rand()%5;
                g_local[partidos]=gol_loc;
                g_visita[partidos]=gol_visit;
                e_local[partidos]=i;
                e_visita[partidos]=j;
                partidos+=1;
            }
        }
    }
}

void calcular_puntos(int e_local[], int e_visita[], int g_local[], int g_visita[], int t_puntos[], int num_partidos){
    int gol_loc=0;
    int gol_visit=0;
    int ganador=0;
    int e1=0;
    int e2=0;
    
    for(int i =0; i<num_partidos; i++){
        gol_loc=g_local[i];
        gol_visit=g_visita[i];
        
        if(gol_loc>gol_visit){
            ganador = e_local[i];
            t_puntos[ganador]+=3;
        }else if(gol_loc==gol_visit){
            e1 = e_local[i];
            e2 = e_visita[i];
            t_puntos[e1]+=1;
            t_puntos[e2]+=1;
        }else{
            ganador = e_visita[i];
            t_puntos[ganador]+=3;
        }
    }
}

int calcular_campeon(int t_puntos[], int n_equipos){
    int campeon = 0;
    int mejor_puntos=0;
    for(int i=0; i<n_equipos;i++){
        if(t_puntos[i]>mejor_puntos){
            mejor_puntos=t_puntos[i];
            campeon = i;
        }
    }
    return campeon;
}

void print_puntos_totales(string equipos[], int t_puntos[], int num_equipos){
    for(int i=0; i<num_equipos;i++){
        cout<<"Equipo: "<<equipos[i]<<" Puntos:"<<t_puntos[i]<<endl;
    }
}

int main()
{
    srand(1234);
    
    string equipos[] = {"Junior", "Millonarios", "Santafé", "Nacional", "Medellín", "Bucaramanga", "Pasto" ,"Alianza", "Huila", "Tolima"};
    int num_equipos = 10;
    int num_partidos = combinatoria(10,2)*2; //Calcular este número a partir del número de equipos (num_equipos Comb 2)*2
    int equipo_local[num_partidos];
    int equipo_visita[num_partidos];
    int goles_local[num_partidos];
    int goles_visita[num_partidos];
    int total_puntos[num_equipos];
    
    generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos);
    iniciar_vector(total_puntos, num_equipos);
    calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos);
    int campeon = calcular_campeon(total_puntos, num_equipos);
    
    print_puntos_totales(equipos, total_puntos, num_equipos);
    cout<<"El ganador del campeonato es "<<equipos[campeon]<<" con "<<total_puntos[campeon]<<" puntos."<<endl;
    
    return 0;
}

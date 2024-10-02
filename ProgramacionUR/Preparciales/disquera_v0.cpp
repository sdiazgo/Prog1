#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<iomanip>

using namespace std;

bool es_primo(int n){
    bool primo = true;
    int i = 2;
    if(n<=1){
        primo = false;
    }else if(n>=2){
        while(i <= sqrt(n) && primo){
            if(n%i==0){primo = false;}
            i++;
        }
    }
    return primo;
}

int tipo_mix(int n){
    if(es_primo(n)){
        return 13;
    }else if(n%2==0){
        return 10;
    }else{
        return 7;
    }
}

void iniciar_nom_canciones(string nom_c[], int len){
    string index = " ";
    for(int i=0; i < len; i++){
        index = to_string(i+1);
        nom_c[i] = "Canción " + index + ".";
    }
}

void iniciar_id_artistas(int artID[], int len){
    int artistID = 0;
    for(int i = 0; i < len; i++){
        artistID = (rand()%1000)+1;
        if(len == 10){
            while(artistID%2 == 1){
                artistID = (rand()%1000)+1;
            }
        }else if(len==7){
            while(artistID%2 == 0){
                artistID = (rand()%1000)+1;
            }
        }else{
            while(!es_primo(artistID)){
                artistID = (rand()%1000)+1;
            }
        }
        artID[i] = artistID;
    }
}

void iniciar_cancion_len(float len_canciones[], int len){
    float dur_total, mins, secs;
    for(int i = 0; i < len; i++){
    if(len==10){
        mins = rand()%5;
        if(mins < 4){
            secs = rand()%60;
        }else{secs = 0;}
        dur_total = mins+(secs/60);
    } else if(len==7){
        mins = rand()%8;
        if(mins < 7){
            secs = rand()%60;
        }else{secs = 0;}
        dur_total = mins+(secs/60);
    }else{
        mins = rand()%14;
        if(mins < 13){
            secs = rand()%60;
        }else{secs = 0;}
        dur_total = mins+(secs/60);
    }
    len_canciones[i]=dur_total;
    }
}

void print_v(string nom_c[], int len){
    for(int i=0; i < len; i++){
        cout<<nom_c[i]<<endl;
    }
}

int recover_secs(float song_len){
    float ans = (song_len - floor(song_len))*60;
    return int(ans);
}

int recover_mins(float song_len){
    int ans = floor(song_len);
    return ans;
}

void print_time(float song_len){
    int mins, secs;
    string extra_zero = "";
    mins = recover_mins(song_len);
    secs = recover_secs(song_len);
    if(secs<10){extra_zero="0";}
    cout<<mins<<":"<<extra_zero<<secs;
}

void print_mix(string nom_c[], int artistID[], float l_canciones[], int len){
    for(int i=0; i < len; i++){
        cout<<nom_c[i]<<" "<< artistID[i]<<" ";
        print_time(l_canciones[i]);
        cout<<endl;
    }
}

float duracion_disco(float l_canciones[], int len){
    float d_total = 0;
    for(int i=0; i < len; i++){
        d_total += l_canciones[i];
    }
    return d_total;
}

float promedio_disco(float dur_disc, int len){
    float pr_disco = dur_disc/len;
    return pr_disco;
}

float stand_dv(float len_canc[], float promedio, int len){
    float suma_sq = 0;
    for(int i = 0; i<len;i++){
        suma_sq += pow((len_canc[i] - promedio),2);
    }
    float stand_dv = sqrt(suma_sq/len);
    return stand_dv;
}

int main()
{
    cout<<fixed<<setprecision(2);
    //srand(1234);
    srand(time(0));
    int albumID = 0;
    int len_mix;
    float dur_disco, promed_disco, st_dv;
    
    
    while(albumID < 1 || albumID > 1000){
        cout<<"Ingrese el ID del álbum"<<endl;
        cin>>albumID;
        if(albumID < 1 || albumID > 1000){cout<<"ID inválido!"<<endl;}
    }
    
    len_mix = tipo_mix(albumID);
    
    string nom_canciones[len_mix];
    int cancion_artistID[len_mix];
    float len_canciones[len_mix];
    
    iniciar_nom_canciones(nom_canciones, len_mix);
    iniciar_id_artistas(cancion_artistID, len_mix);
    iniciar_cancion_len(len_canciones, len_mix);
    print_mix(nom_canciones, cancion_artistID, len_canciones, len_mix);
    
    dur_disco = duracion_disco(len_canciones, len_mix);
    cout<<"Duración total del disco: ";
    print_time(dur_disco);
    cout<<endl;
    
    promed_disco = promedio_disco(dur_disco,len_mix);
    cout<<"Promedio del disco: ";
    print_time(promed_disco);
    cout<<endl;
    
    st_dv = stand_dv(len_canciones,promed_disco,len_mix);
    cout<<"Desviación estándar: ";
    print_time(st_dv);
    cout<<endl;
    
    return 0;
}

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

void print_v(string nom_c[], int len){
    for(int i=0; i < len; i++){
        cout<<nom_c[i]<<endl;
    }
}

void print_mix(string nom_c[], int artistID[], int len){
    for(int i=0; i < len; i++){
        cout<<nom_c[i]<<" "<< artistID[i]<<endl;
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
    mins = recover_mins(song_len);
    secs = recover_secs(song_len);
    cout<<mins<<":"<<secs;
}

int main()
{
    cout<<fixed<<setprecision(2);
    //srand(1234);
    srand(time(0));
    int albumID = 0;
    int len_mix;
    
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
    print_mix(nom_canciones, cancion_artistID, len_mix);
    
    float song_len = 4.86;
    print_time(song_len);
    
    return 0;
}

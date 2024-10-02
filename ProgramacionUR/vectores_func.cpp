
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

void iniciar_vect(int v[], int cap){
    for(int i=0;i<cap;i++){
        v[i]=0;
    }
}

void impr_vector(int v[], int cap){
    for(int i =0;i<cap;i++){
        cout<<v[i]<<"   ";
    }
    cout<<endl;
}

int add(int v[], int num, int elem_n, int cap){
    if(elem_n==cap){
        cout<<"El vector está lleno"<<endl;
    }else{
        v[elem_n]=num;  
        elem_n +=1;
    }
    return elem_n;
}

int insertar(int v[], int num, int pos, int elem_n, int cap){
    int temp;
    int temp2=num;
    if(elem_n==cap){
        cout<<"El vector está lleno"<<endl;
    }else if(pos>cap||pos<0){
        cout<<"Posición inválida"<<endl;
    }else{
        for(int i=pos;i<cap;i++){
            temp=v[i];
            v[i]=temp2;
            temp2=temp;
        }
        elem_n+=1;
    }
    return elem_n;
}

int insertar_v2(int v[], int num, int pos, int elem_n, int cap){
    if(elem_n==cap){
        cout<<"El vector está lleno"<<endl;
    }else if(pos>cap||pos<0){
        cout<<"Posición inválida"<<endl;
    }else{
        for(int i=elem_n;i>=pos;i-=1){
            v[i]=v[i-1];
            if(i==pos){
                v[i]=num;
            }
        }
        elem_n+=1;
    }
    return elem_n;
}

int eliminar(int v[], int pos, int elem_n, int cap){
    int temp;
    if(elem_n==0){
        cout<<"El vector está vacío"<<endl;
    }else if(pos>cap||pos<0){
        cout<<"Posición inválida"<<endl;
    }else{
        for(int i=pos;i<elem_n;i++){
            if(i==elem_n-1){
                v[i]=0;
            }else{
                v[i]=v[i+1];
            }
        }
        elem_n-=1;
    }
    return elem_n;
}

int main()
{
    int capacidad;
    int elementos=0;
    cout<<"Inserte la capacidad de datos del vector"<<endl;
    cin>>capacidad;
    
    int vector[capacidad];
    iniciar_vect(vector, capacidad);
    impr_vector(vector, capacidad);
    
    elementos=add(vector,1,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=add(vector,3,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=add(vector,5,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=insertar(vector,9,0,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=insertar_v2(vector,9,0,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=insertar_v2(vector,9,3,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=eliminar(vector,3,elementos,capacidad);
    impr_vector(vector, capacidad);
    
    elementos=eliminar(vector,0,elementos,capacidad);
    impr_vector(vector, capacidad);
    return 0;
}

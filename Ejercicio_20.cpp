#include<bits/stdc++.h>
using namespace std;
bool Esta_Ordenada(string &cadena);
void Funcion_recursiva(string cadena);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string suma;
    cin>>suma;
    if(suma.length()==1){
        cout<<suma;
    }
    else{
        Funcion_recursiva(suma);
    }
    return 0;
}

bool Esta_Ordenada(string &cadena){
    bool p=false;
    int var_aux,j=0;
    for(int i=0;i< (cadena.length()-1)/2 ;i++){
        if(cadena[j]<=cadena[j+2]){
            p=true;
        }
        else{
            p=false;
            var_aux = cadena[j];
            cadena[j] = cadena[j+2];
            cadena[j+2] = var_aux;
            return p;
        }
        j +=2;
    }
    return p;
}

void Funcion_recursiva(string cadena){
    if(Esta_Ordenada(cadena)){
        cout<<cadena;
    }
    else{
        Funcion_recursiva(cadena);
    }
}

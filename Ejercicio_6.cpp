#include<bits/stdc++.h>
using namespace std;
int camb_estado(int arreglo){
    if(arreglo==1){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int matriz[3][3];
    int cuad_presiones[3][3];
    //Ingreso de datos
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>cuad_presiones[i][j];
            //Simplicar cuadro de presiones
            if(cuad_presiones[i][j]%2==0){
                cuad_presiones[i][j]=0;
            }else{
                cuad_presiones[i][j]=1;
            }
            //Rellenar matriz inicialmente
            matriz[i][j]=1;
        }
    }
    //Lógica
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(cuad_presiones[i][j]==1){
                matriz[i][j]=camb_estado(matriz[i][j]);
                if(i<2){
                    matriz[i+1][j]=camb_estado(matriz[i+1][j]);
                }
                if(i>0){
                    matriz[i-1][j]=camb_estado(matriz[i-1][j]);
                }
                if(j>0){
                    matriz[i][j-1]=camb_estado(matriz[i][j-1]);
                }
                if(j<2){
                    matriz[i][j+1]=camb_estado(matriz[i][j+1]);
                }
            }
        }
    }
    //Salida de datos
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
    return 0;
}



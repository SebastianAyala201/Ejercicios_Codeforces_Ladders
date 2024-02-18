#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int cad[n],aux,cont=0;
    if(n%2==0){
        for(int i=0;i<n;i++){
            cad[i]=i+1;
        }
        for(int i=0;i<n/2;i++){
            aux = cad[cont];
            cad [cont] = cad [cont+1];
            cad[cont+1]= aux;
            cont = cont + 2;
        }
        for(int i=0;i<n;i++){
            cout<<cad[i]<<" ";
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}





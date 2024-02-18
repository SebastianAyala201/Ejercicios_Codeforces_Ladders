#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int mini,maxi,cont;
    cin>>n;
    int arreglo[n];
    for(int i=0;i<n;i++){
        cin>>arreglo[i];
    }
    mini=arreglo[0];
    maxi=arreglo[0];
    for(int i=1;i<n;i++){
        if(arreglo[i]>maxi){
            maxi=arreglo[i];
            cont++;
        }
        if(arreglo[i]<mini){
            mini=arreglo[i];
            cont++;
        }
    }
    cout<<cont;
    return 0;
}


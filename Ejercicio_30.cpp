#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arreglo[n];
    unordered_map<int, int> posicion;
    for(int i=0;i<n;i++){
        cin>>arreglo[i];
        posicion[arreglo[i]] = i + 1;
    }


    int m;
    cin>>m;
    int c;
    long long cont1=0, cont2=0;

    for(int i=0;i<m;i++){
        cin>>c;
        if(posicion.count(c)){
            cont1 += posicion[c];
            cont2 += n - posicion[c] + 1;
        }
    }

    cout<<cont1<<" "<<cont2;
    return 0;
}


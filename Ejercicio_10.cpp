#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cont=0; cin>>n;
    string cad; cin>>cad;
    for(int i=0;i<cad.size()-1;i++){
        if(cad[i]==cad[i+1]){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}


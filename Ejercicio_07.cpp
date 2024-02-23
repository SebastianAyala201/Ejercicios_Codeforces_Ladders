#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string cad;
    int cont=0;
    cin>>cad;

    for(int i=0;i<cad.size();i++){
        if(isupper(cad[i])){
            cont++;
        }
    }
    if(cont>cad.size()/2){
        transform(cad.begin(), cad.end(), cad.begin(), ::toupper);
        cout<<cad;
    }
    else{
        transform(cad.begin(), cad.end(), cad.begin(), ::tolower);
        cout<<cad;
    }

    return 0;
}




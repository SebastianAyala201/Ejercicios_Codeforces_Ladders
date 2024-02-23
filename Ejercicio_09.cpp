#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string numero;
    int cont=0;
    cin>>numero;
    for(int i=0;i<numero.size();i++){
        if(numero[i]=='7'||numero[i]=='4'){
           cont++;
        }
    }
    if(cont==7||cont==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

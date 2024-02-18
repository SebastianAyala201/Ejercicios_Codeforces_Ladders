#include<bits/stdc++.h>
using namespace std;

int num_primo_siguiente(int n);
bool es_primo (int n);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;cin>>a>>b;
    if(b==num_primo_siguiente(a)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

int num_primo_siguiente(int n){
    for(int i=n+1;i<=50;i++){
        if(es_primo(i)){
            return i;
        }
    }
}

bool es_primo (int n){
    int cont=0;
    bool p=false;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }
    }
    if(cont==2){
        p = true;
    }
    return p;
}


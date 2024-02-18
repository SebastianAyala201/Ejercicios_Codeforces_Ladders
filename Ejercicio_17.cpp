#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r;
    int a,b;
    int cont1=0,cont2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        cont1=cont1+l;
        cont2=cont2+r;
    }
    float f;
    f=n/2.0;
    if(cont1>f){
        a=n-cont1;
    }
    else{
        a=cont1;
    }
    if(cont2>f){
        b=n-cont2;
    }
    else{
        b=cont2;
    }
    cout<<a+b;
    return 0;
}

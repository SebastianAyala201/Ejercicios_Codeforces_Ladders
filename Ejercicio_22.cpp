#include<bits/stdc++.h>
using namespace std;

int CantLetras(char a[]);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    char palab[256];
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin>>palab;
        if(CantLetras(palab)>10){
            cout<<palab[0];
            cout<<CantLetras(palab) - 2;
            cout<<palab[CantLetras(palab)-1]<<"\n";
        }else{
            cout<<palab<<"\n";
        }
    }
    return 0;
}

int CantLetras(char a[]){
    int cont=0,i=0;
    while(a[i]!='\0'){
        i++;
        cont++;
    }
    return cont;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int sold[n],aux,cont=0,mini,maxi,p1,p2;
    bool t1=false,t2=false;
    for(int i=0;i<n;i++){
        cin>>sold[i];
    }
    maxi = sold[0];
    for(int i=0;i<n-1;i++){
        if(maxi<sold[i+1]){
            maxi = sold[i+1];
            p1 = i+1;
            t1= true;
        }
    }
    if(t1){
        for(int i=p1;i>0;i--){
            aux = sold[i];
            sold[i]=sold[i-1];
            sold[i-1]=aux;
            cont++;
        }
    }
    mini = sold[n-1];
    for(int i=n-1;i>0;i--){
        if(mini>sold[i-1]){
            mini = sold[i-1];
            p2 = i-1;
            t2= true;
        }
    }
    if(t2){
        for(int i=p2;i<n-1;i++){
            aux = sold[i];
            sold[i]=sold[i+1];
            sold[i+1]=aux;
            cont++;
        }
    }
    cout<<cont;
    return 0;
}






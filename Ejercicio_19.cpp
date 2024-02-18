#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a,b,cm=0,p=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p=p-a+b;
        if(p>cm){
            cm=p;
        }
    }
    cout<<cm;
    return 0;
}


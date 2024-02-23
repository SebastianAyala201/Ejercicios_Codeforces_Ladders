#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,cont=1;cin>>n>>t;
    char cola[n+1];cin>>cola;
    while(cont<t+1){
        for(int i=0;i<n;i++){
            if(cola[i]=='B'&&cola[i+1]=='G'){
                cola[i]='G';cola[i+1]='B';
                i=i+1;
            }
        }
        cont+=1;
    }
    cout<<cola;
    return 0;
}

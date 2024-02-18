#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e,cont=0;
    for(int i=0;i<5;i++){
        cin>>a>>b>>c>>d>>e;
        if(a==1||e==1) cont+=2+abs(i-2);
        if(b==1||d==1) cont+=1+abs(i-2);
        if(c==1) cont+=abs(i-2);
    }
    cout<<cont;

    return 0;
}

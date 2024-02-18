#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,cont1=0,cont2=0,cont3=0; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        cont1+=a;cont2+=b;cont3+=c;
    }
    if(cont1==0 && cont2==0 && cont3==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}

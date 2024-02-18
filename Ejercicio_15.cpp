#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    long double cont=0,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cont=cont+a;
    }
    p=cont/(100*n)*100.0;
    cout<<p;
    return 0;
}

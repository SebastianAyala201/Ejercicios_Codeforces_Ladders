#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cont=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="++X" || s=="X++"){
            cont++;
        }else{
            cont--;
        }
    }
    cout<<cont;
    return 0;
}



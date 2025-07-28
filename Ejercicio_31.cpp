#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int sum = 0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum + a[i];
    }
    int cont=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}

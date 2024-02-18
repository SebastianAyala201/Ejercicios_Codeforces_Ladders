#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string cad;
    cin>>cad;

    if(islower(cad[0])){
        cad[0]=toupper(cad[0]);
    }
    cout<<cad;

    return 0;
}





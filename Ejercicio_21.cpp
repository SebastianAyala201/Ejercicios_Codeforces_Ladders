#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int herradura[4],cont=0;
    bool p;
    for(int i=0;i<4;i++){
        cin>>herradura[i];
    }
    for(int i=0;i<3;i++){
        p=false;
        for(int j=i+1;j<4;j++){
            if(herradura[i]==herradura[j]){
                p=true;

            }
        }
        if(p){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}



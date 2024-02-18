#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string linea;
    cin>>linea;

    for(int i=0;i<linea.size();i++){
        if(linea[i]=='.'){
            cout<<"0";
        }
        else{
            if(linea[i]=='-'){
                if(linea[i+1]=='.'){
                    cout<<"1";
                }
                else if(linea[i+1]=='-'){
                    cout<<"2";
                }
                i++;
            }
        }
    }
    return 0;
}


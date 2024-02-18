#include<bits/stdc++.h>
using namespace std;
bool aHer (string);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    string anio;
    cin>>a;
    do{
        a = a + 1;
        anio=to_string(a);
    }while(aHer(anio));
    cout<<a;
    return 0;
}

bool aHer (string cad){
    bool r=false;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(cad[i]==cad[j]){
                r=true;
            }
        }
    }
    return r;
}



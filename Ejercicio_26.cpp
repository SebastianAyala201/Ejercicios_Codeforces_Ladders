#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string p;
    int min_ascii=33;
    int max_ascii=126;
    bool t = false;
    cin>>p;
    for(char c: p){
        if( int(c) >= min_ascii && int(c) <= max_ascii){
            if(c == 'H' || c == 'Q' || c == '9'){
                t = true;
            }
        }
    }
    if(t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int CantLetrasDist(char a[]);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char palab[256];
    cin>>palab;
    if(CantLetrasDist(palab)%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
        }
    return 0;
}

int CantLetrasDist(char a[]){
    int cont=1,i=1;
    bool p;
    char b[256];
    b[0] = a[0];
    while(a[i]!='\0'){
        p = true;
        for(int j=0;j<=cont;j++){
            if(a[i] == b[j]){
                p = false;
            }
        }
        if(p){
            b[cont] = a[i];
            cont++;
        }
        i++;

    }
    return cont;
}



/*
#include <bits/stdc++.h>
using namespace std;

int CantLetrasDist(const char a[]);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char palab[256];
    cin >> palab;

    if (CantLetrasDist(palab) % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}

int CantLetrasDist(const char a[]){
    int cont = 0;
    bool found[256] = {0}; // Para rastrear caracteres únicos

    for (int i = 0; a[i] != '\0'; i++) {
        if (!found[a[i]]) {
            found[a[i]] = true;
            cont++;
        }
    }

    return cont;
}

*/

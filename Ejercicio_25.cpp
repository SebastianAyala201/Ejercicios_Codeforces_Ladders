#include<bits/stdc++.h>
using namespace std;

int canTotalRodajas(int limones, int rodajas);
int canTotalMm(int mililitros, int botellas, int milixamigo);
int canTotalGr(int gramos, int gramosxamigo);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    int x,y,z;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x = canTotalRodajas(c,d);
    y = canTotalMm(l,k,nl);
    z = canTotalGr(p,np);
    int minimos = min({x, y, z});

    cout << minimos/n;

    return 0;
}

int canTotalRodajas(int limones, int rodajas){
    return limones * rodajas;
}

int canTotalMm(int mililitros, int botellas, int milixamigo){
    return (mililitros * botellas) / milixamigo;
}

int canTotalGr(int gramos, int gramosxamigo){
    return gramos / gramosxamigo;
}


#include<bits/stdc++.h>
using namespace std;

bool permutar(string x, string y, string z);
string unir(string p, string q);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,c;
    cin>>a>>b>>c;
    if (permutar(a, b, c)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

bool permutar(string x, string y, string z) {
    if (x.length() + y.length() != z.length()) {
        return false;
    } else {
        string combined = unir(x, y);
        sort(combined.begin(), combined.end());
        sort(z.begin(), z.end());
        return combined == z;
    }
}

string unir(string p, string q) {
    return p + q;
}

#include <bits/stdc++.h>
using namespace std;

bool contieneCero(int numero);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n;
    cin >> a >> b >> n;

    int ini = a * static_cast<int>(pow(10, n));
    int fin = (a + 1) * static_cast<int>(pow(10, n)) - 1;
    bool encontrado = false;

    for (int i = 0; i <= fin - ini; i++) {
        int num = ini + i;
        if ((num % b == 0) && !contieneCero(num)) {
            cout << num;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << -1;
    }

    return 0;
}

bool contieneCero(int numero) {
    string numeroStr = to_string(numero);
    for (char digito : numeroStr) {
        if (digito == '0') {
            return true;
        }
    }
    return false;
}

/*
//FUENTE:  https://github.com/fuwutu/CodeForces/blob/master/260A%20-%20Adding%20Digits.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    bool exist(false);
    for (int i = 0; i < 10; ++i)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            exist = true;
            break;
        }
    }
    if (!exist)
    {
        cout << -1 << endl;
    }
    return 0;
}
*/
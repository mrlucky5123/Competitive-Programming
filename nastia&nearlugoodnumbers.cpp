#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    if(b == 1) {
        cout << "NO" << endl;
        return ;
    }

    long long x, y, z;
    x = a;
    y = a*b;
    z = x + y;
    cout << "YES" << endl;
    cout << x << " " << y << " " << z << endl; 
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
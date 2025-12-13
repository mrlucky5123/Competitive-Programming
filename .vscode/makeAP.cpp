#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if(2*b-c > 0 && (2*b - c) % a == 0) {
        cout << "YES" << endl;
        return;
    }
    if((a+c) % (2*b) == 0) {
        cout << "YES" << endl;
        return;
    }
    if((2*b-a) > 0 && (2*b-a) % c == 0) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
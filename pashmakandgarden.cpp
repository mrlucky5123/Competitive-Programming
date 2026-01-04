#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll a, b, c, d;
//     cin >> a >> b >> c >> d;

//     if(a + b == c + d) {
//         cout << -1 << endl;
//         return;
//     }

//     ll p = 0, q = 0, r = 0, s = 0;
//     if(a == b && c == d) {
//         cout << a + 1 << " " << b << " " << c - 1 << " " << d << endl;  
//     } else if (a == d && b == c && a != b) {
//         cout << a - 1 << " " << b << " " << c + 1 << " " << d << endl;
//     } else if(c != d) {
//         cout << a + 1 << " " << b << " " << c + 1 << " " << d << endl;
//     } else if(a != b) {
//         cout << a << " " << b + 1 << " " << c << " " << d + 1 << endl;
//     }
// }

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    // horizontal line 
    if(a == c) {
        ll side = abs(b-d);
        cout << a + side << " " << b << " " << c + side << " " << d << endl;
    } else if (b == d) { // vertical line
        ll side = abs(a-c);
        cout << a << " " << b + side << " " << c << " " << d + side << endl;
    } else { // diagonal line 
        if(abs(a-c) == abs(b-d)) {
            cout << a << " " << d << " " << c << " " << b << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
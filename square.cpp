#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d && d == a) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
        return;
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
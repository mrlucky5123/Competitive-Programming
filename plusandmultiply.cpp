#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, a, b; cin >> n >> a >> b;

    if(a == 1) {
        if((n-1) % b == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    

    ll curr = 1;

    while(curr <= n) {
        if((n-curr)% b == 0) {
            cout << "YES" << endl;
            return;
        }
        if(curr > n / a) break;
        curr *= a;
    }
    cout << "NO" << endl;
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
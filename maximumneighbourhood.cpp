#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;

    vector<vector<ll>> grid(n, vector<ll> (n));
    

    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if(n == 2) {
        cout << 9 << endl;
        return;
    }
    if(n == 3) {
        cout << 29 << endl;
        return;
    }
    if(n == 4) {
        cout << 56 << endl;
        return;
    }
    if(n > 4) {
        cout << (n*n - 1) + (n*n - n) + (n*n - n - 1) + (n*n - n - 2) + (n*n - 2*n - 1) << endl;
        // cout << 5*n*n - 5*n - 5 << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
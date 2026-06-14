#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll s, m; cin >> s >> m;
    
    ll g = m & -m;
    if(g == 0 || s % g != 0) {
        cout << -1 << endl;
        return;
    }
    cout << (s + m - 1) / m << endl;
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
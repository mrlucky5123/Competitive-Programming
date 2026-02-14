#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll zero = 0, one = 0;
    for(auto& i : a) {
        cin >> i;
        if(i == 0) zero++;
        if(i == 1) one++;
    }

    if(zero && one) cout << "YES" << endl;
    else if(zero==1 && !one) cout << "YES" << endl;
    else cout << "NO" << endl;
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
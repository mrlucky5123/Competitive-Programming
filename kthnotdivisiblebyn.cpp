#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    // vector<ll> notDivisible;
    // for(ll i = 1; i <= 10e9; i++) {
    //     if(i%k != 0) notDivisible.push_back(i);
    //     if(notDivisible.size() == k) break;
    // }
    // cout << notDivisible[k-1] << endl;

    ll ans = k + (k-1)/(n-1);
    cout << ans << endl;
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
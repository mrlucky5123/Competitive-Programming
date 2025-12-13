#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;

    // smallest multiple of k that is >= n
    // ll target = ceil(n/k)*k;
    ll target = ((n + k - 1) / k)*k;

    // min maximum ele
    // cout << ceil(target/n) << endl;
    cout << ((target + n - 1) / n) << endl;
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
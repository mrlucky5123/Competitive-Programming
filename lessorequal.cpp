#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; 
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll ans;

    if (k == 0) {
        if (a[0] > 1) {
            ans = 1;
        } else {
            ans = -1;
        }
    } 
    else {
        if (k < n && a[k-1] == a[k]) {
            ans = -1;
        } else {
            ans = a[k-1];
        }
    }

    cout << ans << endl;
}

//T.C = O(n Log n)
// S.C = o(n)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    while(t--) {
       solve();
    }
    return 0;
}
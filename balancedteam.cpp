#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a.begin()+1, a.end());

    // ll l = 1, r = 2, ans = 1; 
    // while(l <= n && r <= n) {
    //     if(a[r]-a[l] <= 5) {
    //         r++;
    //     }else {
    //         ans = max(ans, r - l);
    //         l++;
    //     }
    // }
    // ans = max(ans, r - l);

    ll l = 1, ans = 0;
    for(ll r = 1; r <= n; r++) {
        while(a[r]-a[l] > 5)l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
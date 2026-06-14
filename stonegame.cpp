#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    ll min_idx = min_element(a.begin()+1, a.end()) - a.begin();
    ll max_idx = max_element(a.begin() + 1, a.end()) - a.begin();

    // cout << min_idx << " " << max_idx << endl;

    ll s1 = min_idx + n - max_idx + 1;
    ll s2 = max_idx + n - min_idx + 1;
    ll s3 = max(max_idx, min_idx);
    ll s4 = n - min(min_idx, max_idx) + 1;

    cout << min{s1, s2, s3, s4} << endl;
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
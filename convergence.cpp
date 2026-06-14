#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll mid_idx = 0;

    if(n&1) mid_idx = n/2;
    else mid_idx = n/2 -1;

    ll mid = a[mid_idx];

    ll left = 0, right = 0;

    for(ll i = 0; i < n; i++) {
        if(a[i] < mid) left++;
        else if(a[i] > mid) right++;
    }
    cout << max(left, right) << endl;
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
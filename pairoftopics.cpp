#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll count_leq(vector<ll>& a, ll x) {
    ll n = a.size();
    ll left = 0, right = n - 1;
    ll count = 0;
    while(left < right) {
        if(a[left] + a[right] <= x) {
            count += (right - left);
            left++;
        } else right--;
    }
    return count;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;
    vector<ll> d(n);
    for(ll i = 0; i < n; i++) {
        d[i] = a[i] - b[i];
    }
    sort(d.begin(), d.end());
    ll total = n * (n-1) / 2;
    ll bad = count_leq(d, 0);
    cout << total - bad << endl;
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
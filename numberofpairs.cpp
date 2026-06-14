#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll count_leq(vector<ll>& a, ll x) {
    ll n = a.size();
    ll left = 0, right = n-1;
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
    ll n, l, r; cin >> n >> l >> r;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());
    ll ans = 0;
    ans = count_leq(a, r) - count_leq(a, l-1);
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
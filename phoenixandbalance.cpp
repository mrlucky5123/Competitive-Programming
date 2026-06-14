#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1);
    ll total_sum = 0;
    for(ll i = 1; i <= n; i++) {
        // ll num = (2 << i);  wrong way of 2^i
        ll num = (1LL << i);
        a[i] = num;
        total_sum += a[i];
    }

    ll k = n / 2;
    ll curr_sum = 0;
    
    curr_sum += a[n];
    for(ll i = 1; i <= k - 1; i++) {
        curr_sum += a[i];
    }
    cout << abs(curr_sum - (total_sum - curr_sum))<< endl;
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
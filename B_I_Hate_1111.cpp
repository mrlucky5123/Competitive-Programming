#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

vector<ll> a;

bool fun(ll idx, ll x) {
    if(x == 0) return true;
    if(idx == a.size()) return false;

    ll take = x / a[idx];
    while(take >= 0) {
        if(fun(idx + 1, x - take * a[idx]))
            return true;
        take--;
    }
    return false;
}

void solve() {
    ll x; cin >> x;
    if(fun(0, x))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll cur = 11;
    while(cur <= 1000000000LL) {
        a.push_back(cur);
        cur = cur * 10 + 1;
    }
    reverse(a.begin(), a.end());
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
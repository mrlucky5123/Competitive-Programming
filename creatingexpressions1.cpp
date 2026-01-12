#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool helper(ll idx, ll value, vector<ll>& arr, ll x, ll n) {
    if(idx==n) return value==x;

    // bool ans1 = helper(idx+1, value-arr[idx], arr, x, n);
    // bool ans2 = helper(idx+1, value+arr[idx], arr, x, n);

    // return ans1 || ans2;

    if(helper(idx+1, value-arr[idx], arr, x, n)) return true;
    if(helper(idx+1, value+arr[idx], arr, x, n)) return true;   

    return false;
}

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    if(helper(1, a[0], a, x, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
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
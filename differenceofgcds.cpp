#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, l, r; cin >> n >> l >> r;
    vector<ll> ans;
    for(ll i = 1; i <= n; i++) {
        ll temp = ((l + i - 1) / i) * i;
        if(temp > r) {
            cout << "NO" << endl;
            return;
        }
        ans.push_back(temp);
    }
    cout << "YES" << endl;
    for(auto x : ans) cout << x << " ";
    cout << endl;
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
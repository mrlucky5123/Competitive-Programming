#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> pre[3];
    for(ll i = 0; i < 3; i++) {
        ll s = 0;
        pre[i].push_back(s);
        for (ll j = 0; j < n; j++) {
            ll val; cin >> val;
            if((s|val) != s) {
                s |= val;
                pre[i].push_back(s);
            }
        }
    }
    bool ans = false;
    for(ll A : pre[0]) {
        for(ll B : pre[1]) {
            for(ll C : pre[2]) {
                if((A|B|C) == x){
                    ans = true;
                    break;
                } 
            }
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
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
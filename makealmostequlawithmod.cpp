#include<bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll ans = 0;
    for(ll i = 1; i <= 60; i++) { // O(1)
        set<ll> distinctValues;
        ll k = 1LL << i; 

        for(ll idx = 0; idx < n; idx++) { //O(N)
            distinctValues.insert(a[idx] % k); //O(logn)
        }// O(nlogn) 

        if(distinctValues.size() == 2) {
            ans = k;
            break;
        }
    }
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
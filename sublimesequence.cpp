#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll x, n; cin >> x >> n;
    vector<ll> ans(n);
    ll sum = 0; 
    // for(ll i = 0; i < n; i++) {
    //     if(i % 2 == 0) {
    //         ans.push_back(x);
    //         sum += x;
    //     } else {
    //         ans.push_back(-x);
    //         sum += -x;
    //     }
    // }
    if(n % 2 == 0) {
        sum = 0;
    } else {
        
    }
    cout << sum << endl;
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
#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    set<ll> distinct_ele;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        distinct_ele.insert(x);
    }
    ll count = 0;
    for(auto &it : distinct_ele){
        count++;
    }
    ll ans = 2*count - 1; 
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
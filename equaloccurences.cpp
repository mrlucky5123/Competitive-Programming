#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    unordered_map<ll, ll> freq;
    vector<ll> a(n);
    
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(ll i = 0; i < n; i++) {
        freq[a[i]]++;
    }


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
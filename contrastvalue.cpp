#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    if(n < 2){
        cout << 0 << endl;
        return;
    }
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    
    vector<ll> compressed;
    for(ll i = 0; i < n; i++) {
        if(i == 0 || a[i] != a[i-1]) {
            compressed.push_back(a[i]);
        }
    }

    ll k = compressed.size();
    if(k == 1) {
        cout << 1 << endl;
        return;
    }
    ll count = 0;
    for(ll i = 1; i < k-1; i++) {
        if((compressed[i]- compressed[i-1])*(compressed[i+1]-compressed[i]) < 0) {
            count++;
        }
    }
    cout << count + 2 << endl;
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
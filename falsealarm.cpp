#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll first_one_idx = -1;
    ll last_one_idx = -1;
    for(ll i = 0; i < n; i++) {
        if(a[i] == 1) {
            if(first_one_idx == -1) {
                first_one_idx = i;
            } 
            last_one_idx = i;
        }
    }

    ll diff = abs(last_one_idx - first_one_idx) + 1; // because zero based indexing 
    if(diff<= x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
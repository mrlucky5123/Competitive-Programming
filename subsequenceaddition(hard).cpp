#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end());
    if(a[0] != 1) {
        cout << "NO" << endl;
        return;
    }

    ll sum = 1;
    for(ll i = 1; i < n; i++) {
        if(a[i] > sum) {
            cout << "NO" << endl;
            return;
        } 
        sum += a[i];      
    }
    cout << "YES" << endl;
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
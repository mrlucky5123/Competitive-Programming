#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    ll str_idx = -1, end_idx = -1;
    for(ll i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            str_idx = i;
            break;
        }
    }
    for(ll i = n - 1; i >= 0; i--) {
        if(a[i] != b[i]) {
            end_idx = i;
            break;
        }
    }
    while(b[str_idx] >= b[str_idx - 1] && str_idx > 0) str_idx--;
    while(b[end_idx] <= b[end_idx + 1] && end_idx < n - 1) end_idx++;
    cout << str_idx + 1 << " " << end_idx + 1 << endl;
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
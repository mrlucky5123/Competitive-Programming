#include<bits/stdc++.h>
#define ll long long int 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll i = 0;
    ll minc = LLONG_MAX;
    while(i < n) {
        ll j = i;
        while(j < n && a[j] == a[i]) j++;
        ll len = j - i;
        ll cost = (n-len)*1LL*a[i];
        minc = min(cost, minc);
        i = j;
    }
    cout << minc << endl;
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
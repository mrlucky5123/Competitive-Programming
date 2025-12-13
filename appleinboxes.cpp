#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    sort(a.begin(), a.end());
    a[n-1]--;
    sort(a.begin(), a.end());

    if(a[n-1] - a[0] > k || sum % 2 == 0) {
        cout << "Jerry" << '\n';
        return;
    }
    cout << "Tom" << '\n';
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
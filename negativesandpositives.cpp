#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    bool zero = false;
    ll neg_count = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) zero = true;
        if(a[i] > 0) {
            sum += a[i];
        } else {
            neg_count++;
            sum += abs(a[i]);
            a[i] = -a[i];
        }
    }
    
    sort(a.begin(), a.end());
    if(neg_count % 2 == 0 || zero == true) {
        cout << sum << endl;
    } else {
        cout << sum - 2 * a[0] << endl;
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
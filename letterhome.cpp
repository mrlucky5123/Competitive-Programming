#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << abs(s - a[0]) << "\n";
        return;
    }

    ll count = 0;
    ll minimum = a[0];
    ll maximum = a[n-1];
    ll base = maximum - minimum;
    
    bool s_present = false;
    ll idx = -1;
    for(ll i = 0; i < n; i++) {
        if(s == a[i]) {
            s_present = true;
            idx = i;
            break;
        }
    }
    if(s_present) {
        if(idx == 0 || idx == n -1) {
            count = base;
        } else {
            ll min_count = abs(s-minimum);
            ll max_count = abs(s- maximum);
            count = base + min(min_count, max_count);
        }
    } else {
        ll min_count = abs(s-minimum);
        ll max_count = abs(s- maximum);
        count = base + min(min_count, max_count);
    }
    // ll diff1 = s - min;
    // ll diff2 = max - s;
    // if(diff1 <= diff2) {
    //   count = 2 * (s-min) + max - s;
    // } else {
    //   count = 2 * (max - s) + s - min;
    // }

    
    cout << count << "\n";
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
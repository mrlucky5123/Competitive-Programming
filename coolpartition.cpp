#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }

    set<ll> all_elements;
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++) {
        freq[a[i]]++;
        all_elements.insert(a[i]);
    }

    ll ans = 0;
    ll i = n - 1;
    while (i >= 0) {
        set<ll> required = all_elements;
        ans++;
        while(!required.empty() && i >= 0) {
            freq[a[i]]--;
            required.erase(a[i]);
            if(freq[a[i]] == 0)all_elements.erase(a[i]);
            i--;
        }
    }
    cout << ans << '\n';

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
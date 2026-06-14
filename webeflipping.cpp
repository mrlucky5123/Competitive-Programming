#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> flips_idx;
    ll flips = 0;

    for(ll i = n; i >= 1; i--) {
        ll curr;
        
        if(flips%2 == 0) curr = a[i];
        else curr = -a[i];

        if(curr > 0) {
            flips_idx.push_back(i);
            flips++;
        }
    }

    // reverse(flips_idx.begin(), flips_idx.end());
    cout << flips_idx.size() << endl;
    for(ll i = 0; i < flips_idx.size(); i++) {
        cout << flips_idx[i] << " ";
    }
    cout << endl;
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
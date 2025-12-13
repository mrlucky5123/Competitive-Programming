#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> validK(n + 1, 1);
    // assuming all values are valid initially

    for(ll i = 0; i < 30; i++) {
        vector<ll> validFactors(n+1);
        // finding values of k for the ith bit 
        ll cnt = 0;
        for(ll j = 0; j < n; j++) {
            if(a[j]&(1 << i)) cnt++;
        }
        
        for(ll j = 1; j <= n; j++) {
            if(cnt % j == 0) {
                validFactors[j] = 1;
            }
        }

        //taking the intersection of factors 
        for(ll j = 1; j <= n; j++) {
            validK[j] = validK[j] & validFactors[j];
        }
    }
    for(ll i = 1; i <= n; i++) {
        if(validK[i]){
            cout << i << " ";
        }
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
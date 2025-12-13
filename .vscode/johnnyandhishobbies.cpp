#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> freq(1024, 0);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    } 
    
    for(ll k = 1; k < 1024; k++) {
        vector<ll> temp(1024, 0);
        for(ll i = 0; i < n; i++) {
            temp[a[i]^k]++;
        }
        bool possible = true;
        for(ll i = 0; i < 1024; i++) {
            if(temp[i] != freq[i]){
                possible = false;
                break;
            }
        }
        if(possible) {
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
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
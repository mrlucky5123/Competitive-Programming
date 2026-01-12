#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    ll opr = n - k + 1;
    sort(a.begin(), a.end());
    
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++) freq[a[i]]++;
    
    for(auto& it : freq) {
        while(it.second > 1 && opr > 0) {
            it.second--;
            opr--;
        }
    }
    
    vector<ll> rem;
    for(auto& it : freq) {
        for(ll i = 0; i < it.second; i++) {
            rem.push_back(it.first);
        }
    }
    
    while(opr > 0 && !rem.empty()) {
        rem.pop_back();
        opr--;
    }
    
    sort(rem.begin(), rem.end());
    ll mex = 0;
    for(ll i = 0; i < rem.size(); i++) {
        if(rem[i] == mex) mex++;
    }
    
    cout << mex << endl;
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



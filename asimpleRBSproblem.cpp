#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    string s, t; cin >> s >> t;

    vector<ll> for_s, for_t;
    ll count = 0;

    for(ll i = 0; i < n; i++) {
        if(s[i] == '(') count++;
        else count--;
        for_s.push_back(count);
    }
    count = 0;
    for(ll i = 0; i < n; i++) {
        if(t[i] == '(') count++;
        else count--;
        for_t.push_back(count);
    }

    sort(for_s.begin(), for_s.end());
    sort(for_t.begin(), for_t.end());   

    if(for_s == for_t) cout << "YES" << endl;
    else cout << "NO" << endl;
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



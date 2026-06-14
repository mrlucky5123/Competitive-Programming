#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s;
    cin >> s;
    ll cnt0 = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '0') cnt0++;
    }
    if(cnt0 == 1) cout << "BOB" << endl;
    else if(cnt0%2 == 0) cout << "BOB" << endl;
    else cout << "ALICE" << endl;
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
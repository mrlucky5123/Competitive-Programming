#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    string s; cin >> s;
    bool allone = true;
    ll cnt_1 = 0, cnt_0 = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '0') allone = false;
        if(s[i] == '1') {
            cnt_1++;
        } else {
            cnt_0++;
        }
    }

    if(allone) {
        cout << 0 << endl;
        return;
    }
    
    string s2 = s + s;
    ll max_cons = 0;
    ll curr = 0;
    for(ll i = 0; i < 2*n; i++) {
        if(s2[i] == '0') {
            curr++;
            if(curr <= n) {
                max_cons = max(max_cons, curr);
            }
        } else {
            curr = 0;
        }
    }
    // cout << max_cons << " " << cnt_1 << endl;
    if(max_cons >= 2) {
        cout << max_cons << endl;
        return;
    } else {
      cout << 1 << endl;
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
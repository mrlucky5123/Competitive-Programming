#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    string a, b; cin >> a >> b;

    ll cnt0 = 0, cnt1 = 0;
    vector<bool> flip(n);
    for(ll i = 0; i < n; i++) {
        if(a[i] == '0') cnt0++;
        else cnt1++;

        if(cnt0 == cnt1) flip[i] = true;
    }
    
    bool isFlipped = false;
    bool isPossible = true;
    for(ll i = n-1; i >= 0; i--) {
        if(isFlipped == false) {
            if(a[i] != b[i]) {
                if(flip[i]) {
                    isFlipped ^= true;
                } else {
                    isPossible = false;
                    break;
                }
            }
        } else {
            if(a[i] == b[i]) {
                if(flip[i]) {
                    isFlipped ^= true;
                } else {
                    isPossible = false;
                    break;
                }
            }
        }
    }
    if(isPossible) cout << "YES" << endl;
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
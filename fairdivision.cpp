#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll cnt1 = 0, cnt2 = 0, sum = 0;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        if(x == 1)cnt1++;
        else cnt2++;
    }
    
    if(sum&1) {
        cout << "NO" << endl;
    } else {
        if(cnt2&1 && cnt1 < 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
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
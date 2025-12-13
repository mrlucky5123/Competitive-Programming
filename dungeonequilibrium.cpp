#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    map<ll, ll> freqMap;
    for(ll num : a) {
        freqMap[num]++;
    }

    // for(auto i : freqMap) {
    //     cout << i.second << " ";
    // }
    // cout << endl;

    ll ans = 0;
    for(auto i : freqMap) {
        if(i.first == i.second) continue;
        else {
            if(i.second > i.first) {
                ans += i.second - i.first;
            } else {
                ans += i.second;
            }
        }
    }
    cout << ans << endl;
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
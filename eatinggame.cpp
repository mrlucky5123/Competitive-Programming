#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    ll total = accumulate(a.begin(), a.end(), 0);

    set<ll> winners;

    for(ll i = 0; i < n; i++) {
        vector<ll> temp = a;
        ll pos = i;
        ll ate = 0;
        while(true) {
            if(temp[pos] > 0) {
                temp[pos]--;
                ate++;
                if(ate == total) {
                    winners.insert(pos+1);
                    break;
                }
            }
            pos = (pos + 1) % n;
        }
    }
    cout << winners.size() << endl;
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
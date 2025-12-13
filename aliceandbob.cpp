#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, a; cin >> n >> a;
    vector<ll> v(n);
    ll cnt_1 = 0, cnt_2 = 0;
    bool allsame = true;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] < a) cnt_1++;
        if(v[i] > a) cnt_2++;
    }
    if(cnt_1 > cnt_2) cout << a - 1 << endl;
    else cout << a + 1 << endl;
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
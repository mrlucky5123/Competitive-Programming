#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    
    ll odd_cnt = 0, even_cnt = 0;

    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        if(x&1) odd_cnt++;
        else even_cnt++;
    }
    if((odd_cnt%2 == 0 && odd_cnt!= 0 && even_cnt > 0) || odd_cnt&1) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
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
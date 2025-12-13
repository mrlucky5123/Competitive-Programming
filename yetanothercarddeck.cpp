#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q; cin >> n >> q;
    vector<ll> first_pos(51,n+1);
    for(ll i = 1; i <= n; i++) {
        ll color; cin >> color;
        if(first_pos[color] == n + 1) {
            first_pos[color] = i;
        }
    }
    while(q--) {
        ll color; cin >> color;
        ll ans = first_pos[color];
        for(ll i = 1; i <= 50; i++) {
            if(first_pos[i] < ans) {
                first_pos[i]++;
            }
        }
        first_pos[color] = 1;
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> v(n+1);
    vector<pair<ll, ll>> a(n+1);
    for(ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        v[i] = x;
        a[i].first = max(x, a[i-1].first);
        a[i].second = i;
    }

    ll count = 0; 
    for(ll i = 1; i <= n; i++) {
        if(a[i].first == a[i].second) {
            count++;
        }
    }
    // cout << count << endl;
    
    if(count < 2) {
        for(ll i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        ll idx = -1;
        for(ll i = 1; i <= n; i++) {
            if(a[i].first == a[i].second) {
                idx = i;
                break;
            }
        }
        swap(v[idx], *max_element(v.begin()+idx+1, v.end()));
        for(ll i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
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
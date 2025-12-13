#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll binSearch(vector<ll> &pmax, ll n, ll val) {
    ll low = 0, high = n - 1;
    ll ans = -1;
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(pmax[mid] <= val) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> steps(n), query(q);
    for(ll i = 0; i < n; i++) cin >> steps[i];
    for(ll i = 0; i < q; i++) cin >> query[i];

    vector<ll> pmax(n), psum(n);
    pmax[0] = steps[0];
    psum[0] = steps[0];
    for(ll i = 1; i < n; i++) {
        pmax[i] = max(pmax[i-1], steps[i]);
        psum[i] = psum[i-1] + steps[i];
    }
    
    for(ll i = 0; i < q; i++) {
        ll val = query[i];
        ll idx = binSearch(pmax, n, val);
        if(idx == -1) {
            cout << "0 ";
        }else {
            cout << psum[idx] << " ";
        }
    }
    cout << endl;
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
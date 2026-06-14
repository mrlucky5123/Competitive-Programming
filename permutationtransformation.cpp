#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void dfs(vector<ll>& a, vector<ll>& dep, ll l, ll r, ll depth) {
    if(l > r) return;

    ll maxi = max_element(a.begin()+l, a.begin()+r+1)- a.begin(); 
    dep[maxi] = depth;

    dfs(a, dep, l, maxi - 1, depth+1);
    dfs(a, dep, maxi+1, r, depth+1);
}

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n), dep(n);
    for(auto& i : a) cin >> i;

    dfs(a, dep, 0, n-1, 0);

    for(ll i = 0; i < n; i++) {
        cout << dep[i] << " ";
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

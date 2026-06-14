#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    if(sum&1) {
        cout << "YES" << endl;
        return;
    }

    if(n*k % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;  
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
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    ll factor = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i + 1 == k) {
            factor = a[i];
        }
    }
    ll cnt = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] >= factor) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
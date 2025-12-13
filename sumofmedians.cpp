#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll size = n * k;
    vector<ll> a(size);
    for(ll i = 0; i < size; i++) cin >> a[i];

    ll sum = 0;
    ll pointer = n*k;
    ll medianIndex = n/2 + 1;
    while(k--) {
        pointer -= medianIndex;
        sum += a[pointer - 1];
    }
    cout << sum << endl;
}
// 4 3
// 2 4 16 18 , 21 27 36 53, 82 91 92 95

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
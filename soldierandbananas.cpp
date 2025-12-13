#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k, n, w; cin >> k >> n >> w;
    ll cost = 0;
    for(ll i = 0; i < w; i++) {
        cost = cost + (i+1)*k;
    }
    cout << n - cost << endl;
    return 0;
}
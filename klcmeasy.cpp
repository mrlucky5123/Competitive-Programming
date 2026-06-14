#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    if(n&1) {
        cout << 1 << " " << (n-1)/2 << " " << (n-1)/2 << endl;
    } else {
        if(n%4 == 0) {
            cout << n/2 << " " << n/4 << " " << n/4 << endl;
        } else {
            cout << 2 << " " << (n/2)-1 << " " << (n/2)-1 << endl;
        }
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
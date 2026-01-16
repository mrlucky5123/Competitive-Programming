#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    if(n == 2) {
        cout << 2 << endl;
        return;
    }
    if(n==3) {
        cout << 3 << endl;
        return;
    }
    if(n&1) {
        cout << 1 << endl;
    } else cout << 0 << endl; 
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

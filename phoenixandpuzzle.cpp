#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool isPerfectSquare(ll x) {
    if(x <= 0) return false;
    ll root = sqrt(x);
    return root*root == x;
}

void solve() {
    ll n; cin >> n;
    if(n&1){
        cout << "NO" << endl;
        return;
    }
    if(isPerfectSquare(n/2) || isPerfectSquare(n/4)) {
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
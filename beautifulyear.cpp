#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    while(true) {
        n++; 
        set<ll> distinct;
        ll num = n;
        while(num > 0) {
            distinct.insert(num%10);
            num /= 10;
        }
        if(distinct.size() == 4) {
            cout << n << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
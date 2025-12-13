#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    if(n == 3) {
        cout << 1 << " " << 2 << " " << 3 << endl;
        return;
    }

    stack<ll> even, odd;
    ll f = 2;
    for(ll i = 0; i < n / 2; i++) {
        even.push(f);
        odd.push(f+1);
        f += 2;
    }
    if((n/2)&1) {
        ll p = odd.top();
        p ^= 1;
        odd.pop();
        ll q = 1LL << 20;
        p ^= q;
        odd.top() ^= q;
        odd.push(p);
    }
    for(ll i = 1; i <= n; i++) {
        if((n&1) && i == n) {
            cout << 0 << " ";
        } else if(i&1) {
            cout << odd.top() << " ";
            odd.pop();
        } else {
            cout << even.top() << " ";
            even.pop();
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
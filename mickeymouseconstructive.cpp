#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

ll Divisors(ll n) {
    ll count = 0;
    for(ll i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            count++;
            if(i != n / i) count++;
        }
    }
    return count % 676767677;
}


void solve() {
    ll x, y; cin >> x >> y;

    ll sum = x - y;
    if(sum == 0) {
        cout << 1 << endl;
        for(ll i = 0; i < x; i++) {
            cout << 1 << " ";
        }
        for(ll i = 0; i < y; i++) {
            cout << -1 << " ";
        }
        cout << endl;
        return;
    } else {
        ll s = Divisors(abs(sum));
        cout << s << endl;
        if(sum > 0) {
            for(ll i = 0; i < x; i++) {
                cout << 1 << " ";
            }
            for(ll i = 0; i < y; i++) {
                cout << -1 << " ";
            }
            cout << endl;
        } else {
            for(ll i = 0; i < y; i++) {
                cout << -1 << " ";
            }
            for(ll i = 0; i < x; i++) {
                cout << 1 << " ";
            }
            cout << endl;
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
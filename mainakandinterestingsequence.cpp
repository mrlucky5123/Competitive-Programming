#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    if(n > m) {
        cout << "NO" << endl;
        return;
    }
    // vector<ll> res(n);
    // if(m% 2 == 1) {
    //     if(n % 2 == 1) {
    //         cout << "YES" << endl;
    //         for(ll i = 0; i < n - 1; i++) {
    //             res[i] = 1;
    //         }
    //         res[n-1] = m - (n - 1);
    //     } else {
    //         cout << "NO" << endl;
    //     }
    // } else {
    //     if(n % 2 == 1) {
    //         cout << "YES" << endl;
    //         for(ll i = 0; i < n - 1; i++) {
    //             res[i] = 1;
    //         }
    //         res[n-1] = m - (n - 1);
    //     }else {
    //         cout << "YES" << endl;
    //         // ll sum = 0;
    //         for(ll i = 0; i < n - 2; i++) {
    //             res[i] = 1;
    //             // sum += 1;
    //         }
    //         res[n-2] = (m - (n - 2))/ 2;
    //         res[n-1] = (m - (n - 2))/ 2;
    //     }
    // }
    // for(ll i = 0; i < n; i++) {
    //     cout << res[i] << " ";
    // }
    // cout << endl;

    if(m%2) {
        if(n%2 == 0) {
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            for(ll i = 0; i < n - 1; i++) {
                cout << 1 << " ";
            }
            cout << m - (n - 1) << endl;
        }
    } else {
        if(n%2 == 0) {
            cout << "YES" << endl;
            for(ll i = 0; i < n - 2; i++) {
                cout << 1 << " ";
            }
            cout << (m - (n-2))/2 << " " << (m - (n-2))/2 << endl;
        } else {
            cout << "YES"  << endl;
            for(ll i = 0; i < n - 1; i++) {
                cout << 1 << " ";
            }
            cout << m - (n - 1) << endl;
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
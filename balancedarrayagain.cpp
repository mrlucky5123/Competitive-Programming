#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    if(n%4!=0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    ll k = n / 2;

    ll even = 2, sum_even = 0;
    for(ll i = 0; i < k; i++) {
        cout << even << " ";
        sum_even += even;
        even += 2;
    }
    ll odd = 1, sum_odd = 0;
    for(ll i = 0; i < k-1; i++) {
        cout << odd << " ";
        sum_odd += odd;
        odd += 2;
    }
    cout << sum_even - sum_odd << endl;
    
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
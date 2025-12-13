#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) return 0;

    ll gcd = __gcd(a,b);
    return (abs(a) / gcd) * abs(b);
}

void solve() {
    ll n;
    cin >> n;
    ll ans_a = 1;
    ll ans_b = n - 1;

    for(ll fac = 2; fac * fac <= n; fac++) {
        if(n % fac == 0) {
            ans_a = n / fac;
            ans_b = n - ans_a;
            break;
        }
    }
    cout << ans_a << " " << ans_b << endl;
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
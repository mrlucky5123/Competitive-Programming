#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, m; cin >> n >> m;
//     ll max_possible = n - m + 1;
//     max_possible = (max_possible * (max_possible-1)) / 2;

//     ll q = n / m;
//     ll r = n % m;

//     ll min_possible = r * ((q+1)*(q))/2 + (m-r)*(q*(q-1) )/2;

//     cout << min_possible << " " << max_possible << endl;
// }

void solve() {
    ll n, m; cin >> n >> m;

    auto c2 = [](ll x) {
        return x * (x-1)/2;
    };

    ll q = n / m;
    ll r = n % m;

    ll min_p = r * c2(q+1) + (m-r)*c2(q);
    ll max_p = c2(n-m+1);

    cout << min_p << " " << max_p << endl;
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
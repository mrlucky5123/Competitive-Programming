#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m, a, b; cin >> n >> m >> a >> b;
    
    // ll cost1 = n*a;
    // ll cost2 = ((n+m-1)/m)*b;
    // ll cost3 = (n/m)*b + (n%m)*a;

    // cout << min({cost1, cost2, cost3}) << endl;
    cout << min({n*a, ((n+m-1)/m)*b, (n/m)*b + (n%m)*a}) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
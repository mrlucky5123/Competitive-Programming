#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll mini = *min_element(a.begin(), a.end());
    // sort(a.begin(), a.end());
    // ll k = n / 2;
    // for(ll i = 1; i <= k; i++) {
    //     cout << a[i] << " " << a[0] << endl;
    // }
    for(ll i = 0, k = 0; k < n / 2; i++) {
        if(a[i] != mini) {
            cout << a[i] << " " << mini << endl;
            k++;
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
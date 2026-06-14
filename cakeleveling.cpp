#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll frost_level = a[0];

    ll mini = *min_element(a.begin()+1, a.end());

    ll avg = (frost_level + mini) / 2;

    for(ll i = 1; i < n; i++) {
        if(a[i] != avg && a[i] != frost_level) {
            a[i] = avg;
        }
    }

    for(ll i = 0; i < n; i++) {
        cout << a[i] << " ";
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
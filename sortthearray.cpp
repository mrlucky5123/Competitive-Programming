#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];

    }
    
    ll left = -1, right = -1;

    for(ll i = 0; i < n - 1; i++) {
        if(a[i] > a[i+1]) {
            left = i;
            break;
        }
    }

    if(left == -1) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }    

    for(ll i = n - 1; i > 0; i--) {
        if(a[i] < a[i-1]) {
            right = i;
            break;
        }
    }
    reverse(a.begin() + left, a.begin() + right + 1);

    bool sorted = true;
    for(ll i = 0; i < n - 1; i++) {
        if(a[i] > a[i+1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "yes" << endl;
        cout << left + 1 << " " << right + 1 << endl;
    } else {
        cout << "no" << endl;
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
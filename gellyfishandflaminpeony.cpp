#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// k matlab hai array mein agar gcd nhi hai ... to kitne steps lagenge gcd banane mein
int find_k(const vector<ll>& a, ll g) {
    ll max_val = 5000;
    vector<ll> dist(max_val + 1, -1);
    queue<ll> q;
    for (ll v : a) {
        if (dist[v] == -1) {
            dist[v] = 0;
            q.push(v);
        }
    }
    while (!q.empty()) {
        ll v = q.front();
        q.pop();
        if (v == g) return dist[v];
        for (ll aj : a) {
            ll w = gcd(v, aj);
            if (dist[w] == -1) {
                dist[w] = dist[v] + 1;
                q.push(w);
            }
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    // Check if all elements are same
    bool all_same = true;
    for (ll i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            all_same = false;
            break;
        }
    }
    if (all_same) {
        cout << 0 << endl;
        return;
    }

    // gcd array ka 
    ll g = a[0];
    for (ll i = 1; i < n; i++) {
        g = gcd(g, a[i]);
    }

    // gcd count
    int gcd_count = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == g) gcd_count++;
    }
    
    if (gcd_count > 0) {
        cout << n - gcd_count << endl;
    } else {
        // Minimum operations to produce GCD `g`
        ll k = find_k(a, g);
        cout << k + (n - 1) << endl;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}

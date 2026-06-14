#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    deque<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sereja = 0, dima = 0;
    ll chance = 0;
    while(!a.empty()) {
        if(chance&1) {
            if(a.front() > a.back()) {
                dima += a.front();
                a.pop_front();
            } else {
                dima += a.back();
                a.pop_back();
            }
        } else {
            if(a.front() > a.back()) {
                sereja += a.front();
                a.pop_front();
            } else {
                sereja += a.back();
                a.pop_back();
            }
        }
        chance++;
    }
    cout << sereja << " " << dima << endl;
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
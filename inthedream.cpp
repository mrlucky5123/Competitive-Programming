#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    bool first_half = true, second_half = true;

    if(max(a,b) > 2*min(a,b) + 2) {
        first_half = false;
    }
    ll second_half_a = c - a, second_half_b = d - b;

    if(max(second_half_a, second_half_b) > 2*min(second_half_a, second_half_b) + 2) {
        second_half = false;
    }
    if(first_half && second_half) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
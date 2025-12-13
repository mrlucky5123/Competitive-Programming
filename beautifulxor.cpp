#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

#define clz __builtin_clzll

void solve() {
    ll a, b; cin >> a >> b;
    ll len_a = clz(1) - clz(a);
    ll len_b = clz(1) - clz(b);

    if(len_a < len_b){
        cout << -1 << endl;
        return;
    }
    if(len_a == len_b) {
        cout << 1 << endl;
        cout << (a ^ b) << endl;
        return;
    }

    cout << 2 << endl;
    cout << (a ^ b ^ (1LL << len_a)) << " " << (1LL << len_a) << endl;
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
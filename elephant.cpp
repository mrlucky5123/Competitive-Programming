#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll x; cin >> x;
    // cout << ceil(x/5.0) << endl;
    ll x; cin >> x;
    ll i = 5;
    ll step = 0;
    while(i) {
        step += x / i;
        x = x - i *(x/i);
        i--;
    }
    cout << step << endl;
    return 0;
}
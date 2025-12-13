#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
    ll x, k;
    cin >> x >> k;

    vector<bool> constrained(4001, false);

    for(ll i = 0; i < k; i++) {
        ll type;
        cin >> type;
        if(type == 2) {
            ll num;
            cin >> num;
            constrained[num] = true;
        } else {
            ll num2, num1;
            cin >> num2 >> num1;
            constrained[num2] = true;
            constrained[num1] = true;
        }
    }

    ll m = x - 1;

    ll free = 0;
    for(ll i = 1; i <= m; i++) {
        if(!constrained[i]) {
            free++;
        }
    }

    ll p = 0;
    ll i = 1;
    while(i < m) {
        if(!constrained[i] && !constrained[i+1]) {
            p++;
            i += 2;
        } else {
            i++;
        }
    }

    ll min_missed = free - p;
    ll max_missed = free;

    cout << min_missed << " " << max_missed << endl;
    return 0;
}
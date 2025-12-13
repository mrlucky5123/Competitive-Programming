#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        ll n, r, b;
        cin >> n >> r >> b;
        string ans = "";
        // ll count = ceil((double)r / (b + 1));
        // for(ll i = 0; i < b; i++) {
        //     if(i == count && b > 0) {
        //         ans += 'B';
        //         b--;
        //         count += ceil((double)r / (b + 1));
        //     } else {
        //         ans += 'R';
        //     }
        // }
        ll red_per_gap = r / (b+1);
        ll extra_red = r % (b+1);
        for(ll times = 1; times <= b+1; times++) {
            for(ll i = 0; i < red_per_gap; i++) {
                ans += 'R';
            }
            if(extra_red > 0) {
                ans += 'R';
                extra_red--;
            }
            if(times != b+1) {
                ans += 'B';
            }
        }
        cout << ans << endl;
    }
    return 0;
}

// RBRBRBR
// RRRBRR
// RRBRRBRRBRRRBRRRRBR
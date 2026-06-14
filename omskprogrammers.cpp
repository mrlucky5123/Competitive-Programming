#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void process(ll a, ll b, ll x, ll &ans) {
    ll divisions_a = 0;
    ll current_a = a;

    while(true) {
        if(b <= current_a) {
            ans = min(ans, divisions_a + (current_a - b));
        } else {
            ans = min(ans, divisions_a + (b-current_a));

            ll current_b = b;
            ll divisions_b = 0;
            while(current_b > current_a) {
                current_b /= x;
                divisions_b++;

                if(current_b > current_a) {
                    ans = min(ans, divisions_a + divisions_b + (current_b - current_a));
                }
            }
            ans = min(ans, divisions_a + divisions_b + (current_a-current_b));
        }
        if(current_a == 0) break;
        current_a /= x;
        divisions_a++;
    }
}

void solve() {
    ll a, b, x; cin >> a >> b >> x;

    ll ans = abs(a-b);

    process(a,b,x,ans);
    process(b,a,x,ans);

    cout << ans << endl;
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
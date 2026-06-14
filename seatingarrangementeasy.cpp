#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, x, s; cin >> n >> x >> s;
    string str; cin >> str;
    ll cntA = 0;
    for(ll i = 0; i < n; i++) if(str[i] == 'A') cntA++;

    ll ans = 0;
    // ll emptytable = x;
    // ll openseats = 0;

    for(ll k = 0; k <= cntA; k++ ){

        ll curK = k;
        ll emptytable = x;
        ll openseats = 0;
        ll seated = 0;

        for(auto i : str) {
            if(i == 'E') {
                if(openseats > 0) {
                    openseats--;
                    seated++;
                }
            } else if(i == 'I') {
                if(emptytable > 0) {
                    emptytable--;
                    openseats += s-1;
                    seated++;
                }
            } else {
                if(curK > 0) {
                    curK--;
                    if(emptytable > 0) {
                        emptytable--;
                        openseats += s-1;
                        seated++;   
                    } 
                } else {
                    if(openseats > 0) {
                        openseats--;
                        seated++;
                    }
                }
            }
        }
        ans = max(seated, ans);
    }
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
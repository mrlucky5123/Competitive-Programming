#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

/*
For digit 2 :- possible pairs{(0,2),(1,1),(2,0)}
For digit 1 :- possible pairs{(0,1),(1,0)}
For digit 0 :- only (0,0)
*/

void solve() {
    ll n; cin >> n;
    string s;
    cin >> s;
    // string a = "", b = "";
    string a(n, '0'), b(n, '0'); 
    bool split = false;
    for(ll i = 0; i < n; i++) {
        if(!split) {
            if(s[i] == '2') {
                a[i] = '1';
                b[i] = '1';
            } else if (s[i] == '1') {
                a[i] = '1';
                b[i] = '0';
                split = true;
            } else {
                a[i] = '0';
                b[i] = '0';
            }
        } else {
            // if(s[i] == '0') b[i] = '0';
            // else if(s[i] == '1') b[i] = '1';
            // else b[i] = '2';
            // a[i] remains 0
            b[i] = s[i];
        }
        
    }
    cout << a << endl;
    cout << b << endl;

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
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll x = 0;
    while(n--) {
        string s; cin >> s;
        for(ll i = 1; i < 3; i++) {
            if(s[i] == s[i-1] && s[i] == '+') {
                x += 1;
            }
            if(s[i] == s[i-1] && s[i] == '-') {
                x -= 1;
            }
        }
    }
    cout << x << endl;
    return 0;
}
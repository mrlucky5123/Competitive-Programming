#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll cnt_Y = 0;
    // ll cnt_N = 0;
    for(char c : s) {
        if(c  == 'Y') cnt_Y++;
        if(cnt_Y > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
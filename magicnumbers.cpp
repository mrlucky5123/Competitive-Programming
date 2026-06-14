#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();

    ll i = 0;
    while(i < n) {
        if(i+2 < n && s.substr(i,3) == "144") i+=3;
        else if(i+1 < n && s.substr(i, 2) == "14") i+=2;
        else if(s[i] == '1') i+=1;
        else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
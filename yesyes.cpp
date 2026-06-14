#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n = 3;
    string s; cin >> s;
    // string ans = tolower(s);
    string ans = s;
    for(char& c : ans) c = towupper(c);
    if(s == "YES") cout << "YES" << endl;
    else cout << "NO" << endl;
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
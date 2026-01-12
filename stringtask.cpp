#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool check_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

// .c.d.f.r.c.s

// .x.n.h.c.g.t.n.q.c.m


void solve() {
    string s;
    cin >> s;

    string ans = "";
    for(char &c : s) {
        if(check_vowel(c)) {
            continue;
        } else {
            ans += '.';
            ans += tolower(c);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
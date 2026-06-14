#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    char drxn; cin >> drxn;
    string s; cin >> s;

    vector<string> keyboard = {
        "qwertyuiop",
        "asdfghjkl;",
        "zxcvbnm,./"
    };

    // string s1 = "qwertyuiop";
    // string s2 = "asdfghjkl;";
    // string s3 = "zxcvbnm,./";

    string ans = "";
    for(ll i = 0; i < s.size(); i++) {
        for(ll j = 0; j < keyboard.size(); j++) {
            ll pos = keyboard[j].find(s[i]);
            if(pos != string::npos) {
                if(drxn == 'R') ans += keyboard[j][pos-1];
                else ans += keyboard[j][pos+1];
                break;
            }
        }
    }
    // for(ll i = 0; i < s.size(); i++) {
    //     for(auto row : keyboard) {
    //         ll pos = row.find(s[i]);
    //         if(pos != string::npos) {
    //             if(drxn == 'R') ans += row[pos-1];
    //             else ans += row[pos+1];
    //             break;
    //         }
    //     }
    // }
    cout << ans << endl;
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
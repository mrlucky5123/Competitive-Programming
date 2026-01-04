#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     for(ll i = 0; i < s.size(); i++) {
//         if(s[i] == 9) continue;
//         if(s[i] < 9 - s[i]) {
//             continue;
//         } else {
//             s[i] = 9 - s[i];
//         }
//     }
//     cout << s << endl;
// }

void solve() {
    string s;
    cin >> s;

    for(ll i = 0; i < s.size(); i++) {
        ll digit = s[i] - '0'; 

        if(i == 0) {
            if(digit == 9) continue;
        } if(digit > 4) {
            s[i] = (9-digit) + '0';
        } else {
            if(digit > 4) {
                s[i] = (9-digit) + '0';
            }
        }
    }
    cout << s << endl;
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
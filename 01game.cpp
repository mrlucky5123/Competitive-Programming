#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll count_1 = 0, count_0 = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '1') {
            count_1++;
        } else {
            count_0++;
        }
    }
    ll moves = min(count_1, count_0);
    if(moves % 2 == 0) {
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }
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

// #include <bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     ll n = s.size();
//     bool allsame = true;
//     for (ll i = 1; i < n; i++) {
//         if (s[i] != s[i-1]) {
//             allsame = false;
//             break;
//         }
//     }
//     if (allsame) {
//         cout << "NET" << endl;
//         return;
//     }
//     ll chance = 0;
//     bool move_possible = true;
//     while (move_possible) {
//         move_possible = false;
//         for (ll i = 1; i < s.size(); i++) {
//             if ((s[i] == '1' && s[i-1] == '0') || (s[i] == '0' && s[i-1] == '1')) {
//                 s.erase(i-1, 2);
//                 chance++;
//                 move_possible = true;
//                 break;
//             }
//         }
//     }
//     if (chance % 2 == 1) {
//         cout << "DA" << endl;
//     } else {
//         cout << "NET" << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

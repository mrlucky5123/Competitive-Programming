#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    // ll n; cin >> n;
    // string s; cin >> s;
    // // case 1 : 11011
    // if (s.find("11011") != string::npos) {
    //     cout << "NO\n";
    //     return;
    // }
        
    // // case 2 : 1011 at start or 1101 in the end
    // bool starts_1011 = (n >= 4 && s.substr(0, 4) == "1011");
    // bool ends_1101 = (n >= 4 && s.substr(n - 4, 4) == "1101");
    // if (starts_1011 || ends_1101) {
    //     cout << "NO\n";
    //     return;
    // } 
    // cout << "YES" << endl;

    ll n; cin >> n;
    string s; cin >> s;
    // case 1 : 11011
    if (s.find("11011") != string::npos) {
        cout << "NO\n";
        return;
    }
    if (s.find("101") != string::npos && n == 3) {
        cout << "NO\n";
        return;
    }
    
    if(s.find("10101011") != string::npos || s.find("11010101") != string::npos) {
      cout << "NO\n";
      return;
    }
        
    // case 2 : 1011 at start or 1101 in the end
    bool starts_1011 = (n >= 4 && s.substr(0, 4) == "1011");
    bool ends_1101 = (n >= 4 && s.substr(n - 4, 4) == "1101");
    if (starts_1011 || ends_1101) {
        cout << "NO\n";
        return;
    } 
    cout << "YES" << endl;

    // bool possible = true;
    //     for (int i = 0; i < n; ++i) {
    //         if (s[i] == '0') {
    //             // Check if akela
    //             bool akela = (i == 0 || s[i - 1] != '0') && (i == n - 1 || s[i + 1] != '0');
    //             if (akela) {
    //                 bool left_safe = (i == 0) || (i > 1 && s[i - 1] == '1' && s[i - 2] == '0');
    //                 bool right_safe = (i == n - 1) || (i + 2 < n && s[i + 1] == '1' && s[i + 2] == '0');
    //                 if (!left_safe && !right_safe) {
    //                     possible = false;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     cout << (possible ? "YES" : "NO") << '\n';
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
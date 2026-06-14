// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;
//     string s;
//     cin.ignore();
//     getline(cin, s);
// }
    
//     for(int i = 0; i < t; i++) {
//         for(int j = 0; j < s.size(); j++) {
//             if(s[j] == 'B' && s[j+1] == 'G'){
//                 swap(s[j], s[j+1]);
//                 j++;
//             }
//         }
//     }
//     cout << s << endl;
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--) {
        // while(s[i]!='B') i++;
        // if(s[i] == 'B' && s[i+1] == 'G') {
        //     swap(s[i], s[i+1]);
        //     i++;
        // }
        // i++;
        bool swapped = false;
        for(ll j = 0; j < n-1; j++) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                swap(s[j], s[j+1]);
                j++;
                swapped= true;
            }
        }
        if(!swapped) break;
    }
    cout << s << endl;
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
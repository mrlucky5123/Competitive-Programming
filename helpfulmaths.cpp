// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     string result = "";
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == '+') {
//             continue;
//         } else {
//             result.push_back(s[i]);
//         }
//     }

//     sort(result.begin(), result.end());


//     for(int i = 0; i < result.size(); i++) {
//         cout << result[i];
//         if(i != result.size()-1) {
//             cout << "+";
//         }
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    vector<ll> a;

    for(ll i = 0; i < n; i++) {
        if(isdigit(s[i])) {
            a.push_back(s[i]-'0');
        }
    }
    sort(a.begin(), a.end());

    for(ll i = 0; i < a.size(); i++) {
        if(i == a.size()-1) {
            cout << a[i];
            break;
        }
        cout << a[i] << "+";
    }
    cout << endl;
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
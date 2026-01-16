#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     string n1 = "Icosahedron";
//     string n2 = "Cube";
//     string n3 = "Octahedron";
//     string n4 = "Dodecahedron";
//     string n5 = "Tetrahedron";

//     ll ans = 0;
//     while(n--) {
//         string x; cin >> x;
//         if(x == n1) ans += 20;
//         else if(x == n2) ans += 6;
//         else if(x == n3) ans += 8;
//         else if(x == n4) ans += 12;
//         else ans += 4;
//     }

//     cout << ans << endl;
// }

void solve() {
    ll n; cin >> n;
    unordered_map<string, ll> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6}, 
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    ll ans = 0;
    while(n--) {
        string s; cin >> s;
        ans += faces[s];
    }
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
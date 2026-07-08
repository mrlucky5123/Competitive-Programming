#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// Recursive brute force

// string s;
// ll n;
// ll actual;
// ll good, total;

// void fun(ll i, ll val) {
//     if(i == n) {
//         if(val == actual) good++;
//         total++;
//         return;
//     }

//     if(s[i] == '+') fun(i+1, val+1);
//     else if(s[i] == '-') fun(i+1, val-1);
//     else {
//         fun(i+1, val+1);
//         fun(i+1, val-1);
//     }
// }

// void solve() {
//     string d; cin >> d;
//     cin >> s;

//     n = d.size();
//     actual = 0;
//     for(ll i = 0; i < n; i++) {
//         if(d[i] == '+') actual++;
//         else actual--;
//     }

//     good = 0, total = 0;
//     fun(0, 0);

//     cout << fixed << setprecision(12) << (double) good / total << endl;
// }


// Combinatorics approach 

// ll nCr(ll n, ll r) {
//     if(r < 0 || r > n) return 0;

//     r = min(r, n-r);

//     ll res = 1;
//     for(ll i = 1; i <= r; i++) {
//         res = res * (n-r+i)/i; 
//     }
//     return res;
// }

// void solve() {
//     string d; cin >> d;
//     string s; cin >> s;

    // ll actual = 0, now = 0, need = 0, question = 0;
    // for(char c : d) {
    //     if(c == '+') actual++;
    //     else actual--;
    // }
    // for(char c : s) {
    //     if(c == '+') now++;
    //     else if(c == '-') now--;
    //     else question++;
    // }
    // need = actual - now;

//     // impossible cases 
//     if(abs(need) > question || (need + question) % 2 != 0) {
//         cout << fixed << setprecision(12) << 0.0 << endl;
//         return;
//     }

//     ll plus = (need + question) / 2;

//     ll good = nCr(question, plus);
//     ll total = 1 << question;

//     cout << fixed << setprecision(12) << (double) good / total << endl;
// }

// Bitmask approach 

// void solve() {
//     string d, s; cin >> d >> s;
//     ll n = d.size();

//     ll actual = 0, now = 0, need = 0, question = 0, good = 0;
//     for(char c : d) {
//         if(c == '+') actual++;
//         else actual--;
//     }
//     for(char c : s) {
//         if(c == '+') now++;
//         else if(c == '-') now--;
//         else question++;
//     }
//     // need = actual - now;

//     for(ll mask = 0; mask < (1 << question); mask++) {
//         ll val = now;
//         for(ll bit = 0; bit < question; bit++) {
//             if((mask >> bit)&1) val++;
//             else val--;
//         }
//         if(val==actual)good++;
//     }

//     cout << fixed << setprecision(12) << (double) good / (1 << question) << endl;
// }

// DP approach

string s;
ll n;
ll actual;

const ll OFFSET = 10;
ll dp[11][25];

// ll fun(ll i, ll val) {
//     if(i == n) {
//         if(val == actual) return 1;
//         else return 0;
//     }

//     if(s[i] == '+') return fun(i+1, val+1);
//     else if(s[i] == '-') return fun(i+1, val-1);
//     else {
//         return fun(i+1, val+1) + fun(i+1, val-1);
//     }
// }

ll fun(ll i, ll val) {
    if(i==n) {
        if(val==actual) return 1;
        else return 0;
    }
    if(dp[i][val+OFFSET] != -1) return dp[i][val+OFFSET];

    if(s[i] == '+') return dp[i][val+OFFSET] = fun(i+1, val+1);
    else if(s[i] == '-') return dp[i][val+OFFSET] = fun(i+1, val-1);
    else {
        return dp[i][val+OFFSET] = fun(i+1, val+1) + fun(i+1, val-1);
    }
}

void solve() {
    string d; cin >> d;
    cin >> s;
    n = d.size();
    actual = 0;
    for(ll i = 0; i < n; i++) {
        if(d[i] == '+') actual++;
        else actual--;
    }
    ll question = 0;
    for(char c : s) {
        if(c == '?') question++;
    }
    memset(dp, -1, sizeof(dp));

    ll good = fun(0, 0);
    ll total = 1 << question; // total ways to fill the question marks 

    cout << fixed << setprecision(12) << (double) good / total << endl;
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
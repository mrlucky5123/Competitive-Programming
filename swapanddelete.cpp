#include<bits/stdc++.h>
using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     long long n = s.length();
//     long long zero_count = 0;
//     long long one_count = 0;

//     if(n == 0){ cout << 0 << endl;return;}
//     if(n < 2) {
//         cout << 1 << endl;
//         return;
//     }

//     for(int i = 0; i < n; i++) {
//         if(s[i] == '0') {
//             zero_count++;
//         } else {
//             one_count++;
//         }
//     }
//     long long ans = 0;
//     if(zero_count == one_count) {
//         cout << 0 << endl;
//     } else if (zero_count == 0) {
//         ans = one_count;
//     } else if(one_count == 0) {
//         ans = zero_count;
//     } else {
//         if(one_count > zero_count) {
//             long long diff = (one_count - zero_count);
//             ans = diff*zero_count;
//         } else {
//             long long diff = (zero_count - one_count);
//             ans = diff*one_count;
//         }
//     }
//         cout << ans << endl;
// }

void solve() {
    string s;
    cin >> s;
    long long n = s.length();
    long long zero_count = 0;
    long long one_count = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            zero_count++;
        } else {
            one_count++;
        }
    }

    long long zero_left = zero_count;
    long long one_left = one_count;
    long long t_len = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0' && one_left > 0) {
            one_left--;
            t_len++;
        } else if (s[i] == '1' && zero_left > 0) {
            zero_left--;
            t_len++;
        } else {
            break;
        }
    }
    cout << n - t_len << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll count_a = 0, count_b = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'a') count_a++;
        else count_b++; 
    }
    if(count_a == count_b) {
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    ll possible = false;

    // if(count_a > count_b) {
    //     ll diff = count_a - count_b;
    //     ll curr_count_a = 1;
    //     for(ll i = 1; i < n; i++) {
            
    //         while(s[i] == 'a' && s[i] == s[i-1]) {
    //             curr_count_a ++;
    //             if(curr_count_a == diff) {
    //                 possible = true;
    //                 ans = diff;
    //                 break;
    //             } else {
    //                 curr_count_a = 1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    if(count_a > count_b) {
        ll diff = count_a - count_b;
        ll curr_count_a = 1;
        ll lomdi = 1;
        while(curr_count_a != diff && lomdi < n) {
            for(ll i = 1; i < n; i++) {
                if(s[i] == 'a' && s[i] == s[i-1]) {
                    curr_count_a++;
                    if(curr_count_a == diff) {
                        possible = true;
                        ans = diff;
                        break;
                    }
                } else {
                    curr_count_a = 1;
                }
            }
            lomdi++;
        }
    }    
    if(count_a > count_b) {
        ll diff = count_a - count_b;
        ll curr_count_a = 1;
        ll lomdi = 1;
        while(curr_count_a != diff && lomdi < n) {
            for(ll i = 1; i < n; i++) {
                if(s[i] == 'a' && s[i] == s[i-1]) {
                    curr_count_a++;
                    if(curr_count_a == diff) {
                        possible = true;
                        ans = diff;
                        break;
                    }
                } else {
                    curr_count_a = 1;
                }
            }
            lomdi++;
        }
    }    
    // if(count_b > count_a) {
    //     ll diff = count_b - count_a;
    //     ll curr_count_b = 1;
    //     for(ll i = 1; i < n; i++) {
    //         while(s[i] == 'b' && s[i] == s[i-1]) {
    //             curr_count_b++;
    //             if(curr_count_b == diff) {
    //                 possible = true;
    //                 ans = diff;
    //                 break;
    //             } else {
    //                 curr_count_b = 1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    if(possible) cout << ans << endl;
    else cout << -1 << endl;
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

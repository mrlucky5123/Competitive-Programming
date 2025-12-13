#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

// void solve() {
//     string s; cin >> s;
//     ll n = s.size();
    
//     ll cn_1 = 1;
//     if(s[0] == '1' && s[n-1] == '1') {
//         cn_1++;
//     }
//     for(ll i = 1; i < n; i++) {
//         if(s[i] == '1' && s[i-1] == '1') {
//             cn_1++;
//         }
//     }
//     if(cn_1 == 1) {
//         cout << 0 << endl;
//         return;
//     }
//     if(cn_1 == 2) {
//         cout << 2 << endl;
//         return;
//     }
//     if(cn_1 % 2 == 0) {
//         cout << cn_1 + 2 << endl;
//     } else {
//         cout << cn_1 + 1 << endl;
//     }

// }
#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    ll maxi = 0;
    ll i = 0;
    while(i < n) {
        if(s[i] == '0') {
            i++;
            continue;
        }
        ll j = i + 1;
        while(j < n && s[j] == '1') j++;
        maxi = max(maxi, j - i);
        i = j;
    }
    if(maxi == n) {
        cout << n*n << endl;
        return;
    }

    if(s[0] == '1' && s[n-1] == '1') {
        ll i = 0; 
        ll cnt = 0;
        while(i < n && s[i] == '1') {
            i++;
            cnt++;
        }
        ll j = n - 1;
        while(j > i && s[j] == '1') {
            j--;
            cnt++;
        }
        maxi = max(maxi, cnt);
    }
    maxi++;
    ll temp = (maxi+1)/2;
    cout << (temp)*(maxi/2) << endl;

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
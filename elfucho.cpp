#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll n1 = n;
    ll wins_group = 0, losses_group = 0;
    ll ans = 0; 
    while(n > 0) { // winner 
        n /= 2;
        wins_group += n;
    }
    ans += wins_group;
    ll players_for_loss_grp = wins_group + n1 / 2;
    ans += players_for_loss_grp - 1;
    cout << ans << endl;

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

// #include<bits/stdc++.h>
// #define ll long long 
// #define endl '\n'
// using namespace std;

// void solve() {
//     ll n; cin >> n;
//     cout << 2 * (n - 1) << endl;
// }

// int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    long long t;
//    cin >> t;
//    while(t--) {
//        solve();
//    }
//    return 0;
// }
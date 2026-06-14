#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;
//     ll left = 0, right = n - 1;

//     ll cnt = 0;
//     ll alice = 0, bob = 0;
//     ll prev_move = 0;
//     while (left <= right) {
//         ll curr_move = 0;
//         if(cnt % 2 == 0) {
            
//             while(curr_move <= prev_move && left <= right) {
//                 curr_move += a[left];
//                 alice += a[left];
//                 left++;
//             }
//         } else {

//             while(curr_move <= prev_move && left <= right) {
//                 curr_move += a[right];
//                 bob += a[right];
//                 right--;
//             }
//         }
//         prev_move = curr_move;
//         cnt++;
//     }
//     cout << cnt << " " << alice << " " << bob << endl;
// }

// using deque 
void solve() {
    ll n; cin >> n; 
    deque<ll> q(n);
    for(auto& i : q) cin >> i;

    ll alice = 0, bob = 0;
    ll prev_move = 0;
    ll cnt = 0;

    while(!q.empty()) {
        ll curr_move = 0;
        if(cnt % 2 == 0) {
            while(!q.empty() && curr_move <= prev_move) {
                curr_move += q.front();
                alice += q.front();
                q.pop_front();
            }
        } else {
            while(!q.empty() && curr_move <= prev_move) {
                curr_move += q.back();
                bob += q.back();
                q.pop_back();
            }
        }
        cnt++;
        prev_move = curr_move;
    }
    cout << cnt << " " << alice << " " << bob << endl;
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
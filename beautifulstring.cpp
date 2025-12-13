#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool palindrome_check(string str, ll n) {
    ll left = 0, right = n - 1;
    while(left <= right) {
        if(str[left] != str[right]) return false;
        else {
            left++;
            right--;
        }
    }
    return true;
}

void solve() {
    ll n; cin >> n; 
    string s; cin >> s;
    ll k = s.size();
    if(palindrome_check(s, k)){
      cout << 0 << endl;
      return;
    }
    vector<ll> ans;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '1') {
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << endl;
    for(auto& i : ans) {
        cout << i << " ";
    }
    cout << endl;

    // string remaining = "";
    // ll start_idx = -1, end_idx = -1;
    // for(ll i = 1; i < k; i++) {
    //     if(s[i] == '1' && s[i-1] == '0') {
    //         start_idx = i-1;
    //         end_idx = i;
    //     } else {
    //         remaining += s[i];
    //     }
    // }
    // bool possible = palindrome_check(remaining, remaining.size());
    // if(possible) {
    //     cout << 2 << endl;
    //     cout << start_idx << " " << end_idx << endl;
    // } else {
    //     cout << -1 << endl;
    // }
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
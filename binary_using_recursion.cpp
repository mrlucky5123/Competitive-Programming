#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// string binary(int n, string s){
//   if(n == 0) return "0";
//   if(n == 1) return "1";
  
//   return binary(n/2, s) + to_string(n%2);
// }

string bin_representation(ll n) {
    if(n < 2) {
        return to_string(n);
    }
    string ans = bin_representation(n/2);
    if(n&1)ans += '1';
    else ans += '0';
    return ans;
}

void solve() {
  ll n; cin >> n;
//   string ans = "";
  // if (n == 0) cout << 0 << endl;
  // while(n != 0) {
  //   ans = ans + to_string(n % 2);
  //   n /= 2;
  // }
  // reverse(ans.begin(), ans.end());
  
//   ans = binary(n, ans);
  cout << bin_representation(n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
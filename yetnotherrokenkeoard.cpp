#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    string s; cin >> s;
    ll n = s.size();

    vector<ll> low_stack, up_stack;

    for(ll i = 0; i < n; i++) {
        char c = s[i];
        if(islower(c)) {  // lowercase
            if(c != 'b') {
                low_stack.push_back(i);
            } else if(!low_stack.empty()) {
                low_stack.pop_back();
            }
        } else {  // uppercase 
            if(c != 'B') { 
                up_stack.push_back(i);
            } else if(!up_stack.empty()) {
                up_stack.pop_back();
            }
        }
    }

    vector<ll> surv;
    surv.reserve(low_stack.size() + up_stack.size());
    for(auto it : low_stack) surv.push_back(it);
    for(auto it : up_stack) surv.push_back(it);
    sort(surv.begin(), surv.end());

    string res;
    res.reserve(surv.size());
    for(auto it : surv) res.push_back(s[it]);

    cout << res << endl;
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
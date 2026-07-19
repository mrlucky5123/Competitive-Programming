#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& x : a) cin >> x;
    vector<ll> ans(n);
    stack<ll> s;

    //NSL
    for(ll i = 0; i < n; i++) {
        //removing all the useless element
        while(!s.empty() && s.top() >= a[i]) {
            s.pop();
        }
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(a[i]);
    }
    for(ll i = 0; i< n; i++) {
        cout << ans[i] << " ";
    }
}

// T.C : O(n)

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
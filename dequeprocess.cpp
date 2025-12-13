#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    deque<ll> a;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a.push_back(x);
    }
    bool small = true;
    while(!a.empty()) {
        if(small) {
            if(a.front() < a.back()) {
                cout << "L";
                a.pop_front();
            } else {
                cout << "R";
                a.pop_back();
            }
            small = false;
        } else {
            if(a.front() > a.back()) {
                cout << "L";
                a.pop_front();
            } else {
                cout << "R";
                a.pop_back();
            }
            small = true;
        }
    }
    cout << endl;
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
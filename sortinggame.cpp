#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        char c; cin >> c;
        a[i] = c - '0';
    }

    bool check = false;
    for(ll i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            check = true;
            break;
        }
    }
    if(!check) {
        cout << "BOB" << endl;
        return;
    }
    cout << "ALICE" << endl;

    vector<ll> ans;
    ll p1 = 0, p0 = n - 1;

    while(p1 < p0) {
        while(p1 < n && a[p1]!= 1) p1++;
        while(p0 >= 0 && a[p0]!= 0) p0--;

        if(p1 >= p0) break;
        ans.push_back(p1);
        ans.push_back(p0);
        p1++;
        p0--;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto& i : ans) cout << i + 1 << " ";
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
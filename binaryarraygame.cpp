#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    ll cnt_1 = 0, cnt_0 = 0;
    for(auto& i : a) {
        cin >> i;
        // if(i == 1) cnt_1++;
        // else cnt_0++;
    }

    // if(cnt_0 >= cnt_1 && cnt_1 <= 2) {
    //     cout << "BOB" << endl;
    // } else cout << "ALICE" << endl;

    if(a[0] == 1 || a[n-1] == 1) {
        cout << "ALICE" << endl;
    } else cout << "BOB" << endl;
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
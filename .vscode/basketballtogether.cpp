#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    
}

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    long long t;
//    cin >> t;
//    while(t--) {
//        solve();
//    }
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll team_formed = 0, team_size = 1;
    ll left = -1, right = n - 1;

    while(left < right) {
        if((a[right]*team_size) <= d && left < right) {
            left++;
            team_size++;
        } else {
            team_formed++;
            team_size = 1;
            right--;
        }
    }
    cout << team_formed << endl;
   return 0;
}
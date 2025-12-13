#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> times(n);
    for(ll i = 0; i < n; i++) {
        cin >> times[i];
    }
    vector<pair<ll, ll>> building_map;
    for(ll i = 0; i < n; i++) {
        building_map.push_back({times[i], i});
    }
    sort(building_map.rbegin(), building_map.rend());

    vector<ll> ans(n+1, 0);
    // ans[0] = 0;
    
    ll minutes = 0;
    ll coordinates = 1;
    for(ll i = 0; i < n; i++) {
        ans[building_map[i].second + 1] = coordinates;
        minutes += (2 * abs(coordinates) * building_map[i].first);
        if(coordinates < 0) {
            coordinates = abs(coordinates) + 1;
        } else {
            coordinates = -coordinates;;
        }
    }
    cout << minutes << endl;
    for(auto it : ans) {
        cout << it << " ";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define enl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> tasks(n);
    for(ll i = 0; i < n; i++) {
        cin >> tasks[i].first; // start time
    }
    for(ll i = 0; i < n; i++) {
        cin >> tasks[i].second; // duration
    }
    vector<ll> end_times(n);
    end_times[0] = tasks[0].second - tasks[0].first; 
    for(ll i = 1; i < n; i++) {
        if(tasks[i-1].second > tasks[i].first) {
            end_times[i] = tasks[i].second - tasks[i-1].second;
        } else {
            end_times[i] = tasks[i].second - tasks[i].first;
        }
    }

    for(auto& time : end_times) {
        cout << time << " ";
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
// 2 7 1 
// 1 1 
// 1 183 1 60 7644 900 914 80152 5644467 
// 1000000000 
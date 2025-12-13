#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll min_Repaints = k; // worst case: repaint all k tiles 

    // Brute Force Solution 
    // for(ll i = 0; i <= n - k; i++) {
    //     ll white_count = 0;
    //     for(ll j = i; j < i + k; j++) {
    //         if(s[j] == 'W') white_count++;
    //     }
    //     min_Repaints = min(min_Repaints, white_count);    
    // }

    // Sliding Window Approach
    // ll white_count = 0;
    // ll left = 0, right = 0;
    // while(right < n) {
    //     if(s[right] == 'W') white_count++;
    //     if(right - left + 1 < k) {
    //         right++;
    //     } else {
    //         min_Repaints = min(min_Repaints, white_count);
    //         if(s[left] == 'W') white_count--;
    //         left++;
    //         right++;
    //     }
    // }

    // Prefix sum array approach.
    vector<ll> prefix_sum(n+1, 0); // for 1 based indexing 

    for(ll i = 0; i < n; i++) {
        prefix_sum[i+1] = prefix_sum[i] + (s[i] == 'W');
    }
    for(ll i = 0; i <= n - k; i++) {
        ll diff = prefix_sum[i+k] - prefix_sum[i];
        min_Repaints = min(min_Repaints, diff);
    }

    cout << min_Repaints << endl;
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
#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
// order_of_key(k) : no. of elements < k
// *find_by_order(i) : value at index i (0-based)


void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> start_plus_end(n);
    for(ll i = 0; i < n; i++) { // O(n)
        cin >> start_plus_end[i].first >> start_plus_end[i].second;
    }

    sort(start_plus_end.begin(), start_plus_end.end()); //O(nlogn)
    Oset st;
    ll ans = 0; 
    for(ll i = 0; i < n; i++) {
        ans += i - st.order_of_key(start_plus_end[i].second); //O(logn) // i = st.size(); this will give me how many values are greater than bi or in other words going beyond bi covering it 
        st.insert(start_plus_end[i].second); //O(logn)
    } // O(nlogn)
    cout << ans << endl;
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
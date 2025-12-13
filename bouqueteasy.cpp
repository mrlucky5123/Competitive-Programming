#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    
    vector<ll> flowers(n);
    for (ll i = 0; i < n; i++) {
        cin >> flowers[i];
    }
    
    sort(flowers.begin(), flowers.end());
    
    vector<ll> prefixSum(n);
    prefixSum[0] = flowers[0];
    for (ll i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + flowers[i];
    }
    
    ll maxBeauty = 0;
    
    for (ll startIdx = 0; startIdx < n; startIdx++) {
        ll availableBudget;
        if (startIdx == 0) {
            availableBudget = m;
        } else {
            availableBudget = prefixSum[startIdx - 1] + m;
        }
        
        ll sameBeautyLimit = upper_bound(flowers.begin(), flowers.end(), flowers[startIdx] + 1) - flowers.begin();
        sameBeautyLimit--;          
        
        ll budgetLimit = upper_bound(prefixSum.begin(), prefixSum.end(), availableBudget) - prefixSum.begin();
        budgetLimit--;  
        
        if (budgetLimit < startIdx) {
            continue;
        }
        
        ll currentBeauty;
        if (budgetLimit <= sameBeautyLimit) {
            currentBeauty = prefixSum[budgetLimit] - (startIdx == 0 ? 0 : prefixSum[startIdx - 1]);
        } else {
            currentBeauty = prefixSum[sameBeautyLimit] - (startIdx == 0 ? 0 : prefixSum[startIdx - 1]);
        }
        
        maxBeauty = max(maxBeauty, currentBeauty);
    }
    
    cout << maxBeauty << endl;
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
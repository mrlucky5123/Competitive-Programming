#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;

    if(k == n - 1 && n == 4) {
        cout << -1 << endl;
        return;
    }

    vector<pair<ll,ll>> pairs;

    // Case 1 : k = 0
    if(k == 0) {
        for(ll i = 0; i < n / 2; i++) {
            ll compliment_x = i ^ (n - 1);
            pairs.push_back({i, compliment_x});
        }
    }

    //Case 2 : (0 < k < n - 1)
    else if (k < n - 1) {
        set<ll> used;
        ll compliment_k = k ^ (n - 1);

        pairs.push_back({0, compliment_k});
        used.insert(0);
        used.insert(compliment_k);


        pairs.push_back({k, n - 1});
        used.insert(k);
        used.insert(n-1);

        for(ll i = 0; i < n; i++) {
            if(used.count(i) == 0) {
                ll compliment_k = i ^ (n - 1);
                if(used.count(compliment_k) == 0) {
                    pairs.push_back({i, compliment_k});
                    used.insert(i);
                    used.insert(compliment_k);
                }
            }
        }
    }

    // Case 3 : k = n - 1
    else {
        set<ll> used;

        pairs.push_back({n - 1, n - 2});
        used.insert(n - 1);
        used.insert(n - 2);
            
        pairs.push_back({n - 3, 1});
        used.insert(n - 3);
        used.insert(1);
            
        pairs.push_back({0, 2});
        used.insert(0);
        used.insert(2);

        for(ll i = 0; i < n; i++) {
            if(used.count(i) == 0) {
                ll compliment_k = i ^ (n - 1);
                if(used.count(compliment_k) == 0) {
                    pairs.push_back({i, compliment_k});
                    used.insert(i);
                    used.insert(compliment_k);
                }
            }
        }
    }

    for(auto p : pairs) {
        cout << p.first << " " << p.second << endl;
    }
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
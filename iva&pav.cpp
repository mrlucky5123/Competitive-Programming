#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;
const ll MAXN = 200010;
const ll LOGN = 18; // 2^18 > 2e5
ll st[LOGN][MAXN];
ll logg[MAXN];

void build_sparse(ll n, vector<ll>& a) {
    // base 
    for(ll i = 0; i < n; i++) {
        st[0][i] = a[i];
    }
    //table
    for(ll i = 1; i < LOGN; i++) {
        for(ll j = 0; j + (1 << i) <= n; j++) {
            st[i][j] = st[i-1][j] & st[i-1][j + (1 << (i-1))];
        }
    }
}

ll query_and(ll L, ll R) {
    if(L > R) return (1LL << 31) - 1; // all bits 1
    ll len = R - L + 1;
    ll k = logg[len];
    return st[k][L] & st[k][R - (1 << k) + 1];
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    build_sparse(n,a);

    ll q; cin >> q;
    vector<ll> answers;
    for(ll i= 0; i < q; i++) {
        ll l, k;
        cin >> l >> k;
        l--; // 0 based

        ll low = l, high = n -1, ans = -1;
        while(low <= high) {
            ll mid = (low + high) / 2;
            if(query_and(l, mid) >= k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if(ans != -1 && query_and(l, ans) >= k) {
            answers.push_back(ans + 1);
        } else {
            answers.push_back(-1);
        }
    }
    //output
    for(auto x : answers) {
        cout << x << " ";
    }
    cout << endl; 
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   // precompute log
   logg[1] = 0;
   for(ll i = 2; i < MAXN; i++) {
    logg[i] = logg[i / 2] + 1;
   }

   long long t;
   cin >> t;
   while(t--) {
       solve();
   }
   return 0;
}
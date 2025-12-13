#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

ll check (ll n, vector<ll>& a) {
    if (n == 1) {
        return a[0];
    }

    vector<ll> lt1, lt2, lt3, lt4;
    ll score = 0;
    for(ll i = 0; i < n; i++) {
        if(i % 2 == 0) {
            lt1.push_back(2*a[i] + i);
            lt3.push_back(2*a[i] - i);
            score += a[i];
        } else {
            lt2.push_back(2*a[i] + i);
            lt4.push_back(2*a[i] - i);
            score -= a[i];
        }
    }
    ll x = n -2;
    if(n % 2 == 1) {
        x += 1;
    }
    sort(lt1.begin(), lt1.end());
    sort(lt2.begin(), lt2.end());
    sort(lt3.begin(), lt3.end());
    sort(lt4.begin(), lt4.end());
    ll b = lt2.back() - lt1[0];
    ll c = lt4.back() - lt3[0];
    return max({score + x, score + b, score + c});
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    cout << check(n, a) << endl;
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
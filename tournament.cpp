#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, j , k;
    cin >> n >> j >> k;
    vector<ll> a(n);
    ll hero_index = -1;
    ll hero_ele = -1;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i == j) {
            hero_index = i;
            hero_ele = a[i];
        }
    }
    ll hero_target_index = -1;
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++) {
        if(hero_ele == a[i]) {
            hero_target_index = i;
        }
    }
    bool hero_ele_smallest = true;
    for(ll i = 0; i < n; i++) {
        if(hero_ele > a[i]) {
            hero_ele_smallest = false;
        }
    }

    if(hero_ele_smallest && k == 1 && hero_target_index == hero_index) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
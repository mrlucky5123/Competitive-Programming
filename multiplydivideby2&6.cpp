#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;

    ll count_2 = 0, count_3 = 0;
    while(n % 2 == 0) {
        n /= 2;
        count_2++;
    }

    while(n % 3 == 0) {
        n /= 3;
        count_3++;
    }

    if(n != 1 || count_2 > count_3) {
        cout << -1 << endl;
        return;
    }

    if(count_2 <= count_3) {
        cout << count_3 - count_2 + count_3 << endl;
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
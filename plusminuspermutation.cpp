#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

ll lcm(ll num1, ll num2) {
    return (num1 * num2) / (__gcd(num1, num2)); // a * b = gcd(a,b) * lcm(a,b)

    // O(log(min(a,b))) --> O(log(N))
}

ll CalculateSum(ll start, ll end) {
    ll sum = ((start + end) * (end - start + 1)) / 2;
    return sum;
}

void solve() {
    ll n, x, y; cin >> n >> x >> y;

    ll count1 = (n/x) - (n / lcm(x,y));
    ll count2 = (n/y) - (n / lcm(x,y));

    ll ans = CalculateSum(n - count1 + 1, n) - CalculateSum(1LL, count2);
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
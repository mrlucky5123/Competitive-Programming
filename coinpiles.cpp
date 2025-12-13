#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;
   while(t--) {
       ll a, b;
       cin >> a >> b;
       if((a+b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
           cout << "YES" << endl;
       } else {
           cout << "NO" << endl;
       }
   }
   return 0;
}
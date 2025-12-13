#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007; // 10 ^ 9 + 7

ll mod_pow(ll base, ll exp, ll mod)
{
   ll res = 1;
   base %= mod;
   while (exp)
   {
      if (exp & 1)
         res = (res * base) % mod;
      base = (base * base) % mod;
      exp >>= 1;
   }
   return res;
}

int main()
{
   ll n;
   cin >> n;
   cout << mod_pow(2, n, mod) << '\n';
   return 0;
}
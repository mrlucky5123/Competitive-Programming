#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

vector<ll> generate_prime(ll n)
{
    vector<ll> primes;
    ll num = 2;

    while (primes.size() < n)
    {
        bool is_prime = true;
        for (ll i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> p = generate_prime(n);

    cout << p[0] << " ";
    for (ll i = 1; i < n; i++)
    {
        cout << p[i - 1] * p[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
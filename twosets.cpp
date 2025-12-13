#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long total_sum = (n * (n + 1)) / 2;
    long long target_sum = total_sum / 2;
    vector<long long> group1, group2;

    for (long long i = n; i >= 1; i--)
    {
        if (target_sum >= i)
        {
            group1.push_back(i);
            target_sum -= i;
        }
        else
        {
            group2.push_back(i);
        }
    }

    if (total_sum % 2 == 0)
    {
        cout << "YES" << endl;
        cout << group1.size() << endl;
        for (long long num : group1)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << group2.size() << endl;
        for (long long num : group2)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
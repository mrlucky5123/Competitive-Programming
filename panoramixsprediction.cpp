#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n < 2) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    
    auto it1 = find(primes.begin(), primes.end(), n);
    auto it2 = find(primes.begin(), primes.end(), m);
    
    if(it1 == primes.end() || it2 == primes.end()) {
        cout << "NO" << endl;
        return 0;
    }

    if(it2 == it1 + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
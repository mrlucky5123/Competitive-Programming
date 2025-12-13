#include<bits/stdc++.h>
using namespace std;



int main() {
    long long k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    
    long long count = 0;

    if(k == 1) {
        cout << d << endl;
        return;
    }

    vector<bool> isDamaged(d + 1, false);
    for(long long i = 1; i <= d; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            isDamaged[i] = true;
        }
    }
    for(long long i = 0; i <= d; i++) {
        if(isDamaged[i]) {
            count++;
        }
    }  
    cout << count << endl;  
    return 0;
}
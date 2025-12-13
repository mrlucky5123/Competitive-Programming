#include<bits/stdc++.h>
using namespace std;

// void solve () {
//     int n;
//     cin >> n;
//     vector<long long> arr(n);
//     for(long long i = 0; i < n; i++) {
//         cin >> arr[i];
//     }  

//     bool found = false;
//     for(long long i = 0; i < n; i++) {
//         for(long long j = i + 1; j < n; j++) {
//             if(__gcd(arr[i], arr[j]) <= 2) {
//                 found = true; // found a valid pari, no need to continue
//                 break;
//             }
//         }
//     }
//     if(found) {
//         cout << "YES" << endl;;
//     } else {
//         cout << "NO" << endl;
//     }
// }

void solve() {
    int n ;
    cin >> n;
    vector <long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] <= 2) {
            cout << "YES" << endl;
            return;
        }
    }

    int even_count = 0;
    vector<long long> evens;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
            if(evens.size() < 2) {
                evens.push_back(arr[i]);
            }
        }
    }

    if(even_count >= 2) {
        if(__gcd(evens[0], evens[1]) <= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(__gcd(arr[i], arr[j]) <= 2) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
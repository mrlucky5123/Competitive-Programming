#include<bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, morning_ones;
    cin >> guest >> host >> morning_ones;

    vector<long long> guest_host_count(26,0);
    vector<long long> morning_ones_count(26,0);
    
    if (guest.size() + host.size() != morning_ones.size()) {
        cout << "NO" << endl;
        return 0;
    }

    for(long long i = 0; i < guest.size(); i++) {
        guest_host_count[guest[i] - 'A']++;
    }
    for(long long i = 0; i < host.size(); i++) {
        guest_host_count[host[i] - 'A']++;
    }

    for(long long i = 0; i < morning_ones.size(); i++) {
        morning_ones_count[morning_ones[i] - 'A']++;
    }

    for(long long i = 0; i < 26; i++) {
        for(long long i = 0; i < 26; i++) {
            if(guest_host_count[i] != morning_ones_count[i]) {
                cout << "NO" << endl;
                return 0;
            } 
        }
    }
    cout << "YES" << endl;
    
    return 0;
}

// int main() {
//     string guest, host, morning_ones;
//     cin >> guest >> host >> morning_ones;

//     if (guest.size() + host.size() != morning_ones.size()) {
//         cout << "NO" << endl;
//         return 0;
//     }

//     vector<int> guest_host_count(26,0);
//     vector<int> morning_ones_count(26,0);

//     for(char c : guest) {
//         guest_host_count[c - 'A']++;
//     }
//     for(char c : host) {
//         guest_host_count[c - 'A']++;
//     }
//     for(char c : morning_ones) {
//         morning_ones_count[c - 'A']++;
//     }
    
//     for(int i = 0; i < 26; i++) {
//         if(guest_host_count[i] != morning_ones_count[i]) {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;

//     long long n = s1.length();

//     for(long long i = 0; i < n; i++) {
//         if(s1[i] == s2[i]) {
//             cout << "0";
//         } else {
//             cout << "1";
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    long long n = s1.length();

    for(long long i = 0; i < n; i++) {
        if(s1[i] ^ s2[i]) {
            cout << "1";
        }else {
            cout << "0";
        }
    }
    return 0;
}
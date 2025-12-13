#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    getline(cin, num);

    long long lucky_count = 0;
    for(int i = 0; i < num.length(); i++) {
        if(num[i] == '4' || num[i] == '7'){
            lucky_count++;
        } else {
          continue;
        }
    }
    if(lucky_count == 4 || lucky_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
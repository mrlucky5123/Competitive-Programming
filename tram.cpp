#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = INT_MIN;
    int person_in_tram = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        int person_exit = a;
        int person_enter = b;
        if(person_in_tram == 0) {
            person_in_tram = person_enter;
        } else {
            person_in_tram = person_in_tram - person_exit + person_enter;
        }
        ans = max(person_in_tram, ans);
    }
    cout << ans << endl;
    return 0;
}
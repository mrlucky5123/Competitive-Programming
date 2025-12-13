#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n; // for the size of array a 

    vector<int> b(n-2);
    for(int i = 0; i < n-2; i++){
        cin >> b[i]; // to read array b
    }

    vector<int> a(n, 1); // to initialize all the values in the starting as 1's 
    
    for(int i = 0; i < n-4; i++) {
        if(b[i] == 1 && b[i+1] == 0 && b[i+2] == 1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
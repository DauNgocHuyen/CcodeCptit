#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        long long n = s.size();
        int ok = 0;
        for (int i = 0; i <= n/2; i++){
            if (s[i] % 2 == 1){
                cout << "NO" << endl;
                ok = 1;
                break;
            }
            else {
                if (s[i] != s[n-1-i]) {
                    cout << "NO" << endl;
                    ok = 1;
                    break;
                }
            }
        }
        if (ok == 0) cout <<"YES" << endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int check[10005];
int main(){
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < 10005; i++){
        check[i] = 0;
    }
    while (t--){
        string s;
        getline(cin, s);
        int ok = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] < '0' || s[i] >'9' || s[0] == '0') {
                cout <<"INVALID" << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0) {
            for (int i = 0; i < s.size(); i++){
                check[s[i]] ++;
            }
            int count = 0;
            for (int i = 0; i < s.size(); i++){
                if (check[s[i]] > 0){
                    count ++;
                    check[s[i]] = 0;
                }
            }
            if (count == 10) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
// code by dnhuyen

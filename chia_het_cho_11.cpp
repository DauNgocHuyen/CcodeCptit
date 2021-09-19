#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        long long sumc = 0;
        long long suml = 0;
        for (int i = 0; i < s.size(); i++){
            if (i % 2 == 0) suml += (s[i]-48);
            else sumc += (s[i] - 48);
        }
        if (abs(sumc - suml) % 11 == 0) cout << "1" << endl;
        else cout << "0"<< endl;
    }
    return 0;
}
// code by dnhuyen

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        int sum = 0;
        string s1 = "0";
        if (s == s1) cout << "0" << endl;
        else {
            int sum = 0;
            for (int i = 0; i < s.size(); i++){
                sum += (s[i] -48);
            }
            if (sum % 9 == 0) cout << "1" << endl;
            else cout <<"0" << endl;
        }
    }
    return 0;
}
// code by dnhuyen

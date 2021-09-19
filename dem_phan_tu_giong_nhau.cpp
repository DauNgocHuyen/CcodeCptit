#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++){
            if (s[i] >= 'a' && s[i] <= 'z'){
                s[i] =' ';
            }
        }
        stringstream p(s);
        int token;
        vector <int> ans;
        while (p >> token){
            ans.push_back(token);
        }
        int res = 0;
        for (int i = 0; i < ans.size(); i++){
            if (ans[i] > res) res = ans[i];
        }
        cout << res << endl;
    }
    return 0;
}
// code by dnhuyen

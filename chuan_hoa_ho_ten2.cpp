#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline (cin, s);
        for (int i = 0; i < s.size(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
        stringstream p(s);
        string token;
        vector <string> ans;
        while (p >> token){
            ans.push_back(token);
        }
        for (int i = 0; i < ans.size(); i++){
                ans[i][0] -= 32;
            }
        if ( n == 1){
            cout << ans[ans.size()-1] << " ";
            for (int i = 0; i < ans.size()-1; i++){
                cout << ans[i] << " ";
            }
        }
        else if (n == 2) {
            for (int i = 1; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << ans [0];
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen

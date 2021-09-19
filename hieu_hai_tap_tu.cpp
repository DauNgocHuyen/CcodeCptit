#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s1, s2;
        getline (cin, s1);
        getline (cin, s2);
        vector <string> cs1;
        stringstream p(s1);
        string token1;
        while ( p >> token1){
            cs1.push_back(token1);
        }
        vector <string> cs2;
        stringstream q(s2);
        string token2;
        while ( q >> token2){
            cs1.push_back(token2);
        }
        vector <string> ans;
        for (int i = 0; i < cs1.size(); i++){
            for (int j = 0; j < cs2.size(); j++){
                if (cs1[i] != cs2[j]){
                    ans.push_back(cs1[i]);
                }
            }
        }
        for (int i = 0; i < ans.size() - 1; i++){
            for (int j = i+1; j < ans.size(); j ++){
                if (ans[i] != ans[j]){
                    cout << ans[i];
                }
            }
        }
    }
    return 0;
}
// code by dnhuyen

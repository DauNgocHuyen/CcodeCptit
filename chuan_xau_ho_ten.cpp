#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    stringstream p(s);
    string token;
    vector <string> ans;
    while (p >> token){
        ans.push_back(token);
    }
    ans[0][0] -=32;
    int x = ans[ans.size()-1].size();
    for (int i = 1; i < ans.size()-1; i++){
        ans[i][0] -= 32;
    }
    for (int i = 0; i < ans.size()-2; i++){
        cout << ans[i] << " ";
    }
    cout << ans[ans.size()-2];
    cout << ", ";
    for (int i = 0; i < x; i++){
        ans[ans.size()-1][i] -= 32;
    }
    cout << ans[ans.size() -1];
    return 0;
}
// code by dnhuyen
 
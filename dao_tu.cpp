#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream p(s);
        vector <string> ans;
        string tmp;
        while (p >> tmp){
            ans.push_back(tmp);
        }
        for (int i = ans.size()-1; i >= 0; i--){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
